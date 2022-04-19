const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds = 10;

const card = {

  
  cardLock: function(parameters, callback) {
    return db.query('CALL cardLock(?,?);', //(locked 0/1, cardnumber)
    [parameters.locked, parameters.cardnumber], callback);
  },


  getById: function(id, callback) {
    return db.query('select * from card where id_card=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from card', callback);
  },

  getByCard: function(card, callback) {
    return db.query('select * from card where cardnumber=?', [card], callback);
  },

  add: function(card, callback) {
    bcrypt.hash(card.pincode, saltRounds, function(err, hash){
      return db.query('insert into card (cardnumber, pincode, locked) values(?,?,?)',
        [card.cardnumber, hash, card.locked], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from card where id_card=?', [id], callback);
  },
  
  update: function(id, card, callback) {
    bcrypt.hash(card.pincode, saltRounds, function(err, hash){
      return db.query('update card set cardnumber=?, pincode=?, locked=? where id_card=?',
        [card.cardnumber, hash, card.locked, id], callback);
    });
  }
  
};
module.exports = card;
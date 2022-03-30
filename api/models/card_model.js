const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds = 10;

const card = {
  getById: function(id, callback) {
    return db.query('select * from card where id_card=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from card', callback);
  },
  add: function(card, callback) {
    bcrypt.hash(card.pincode, saltRounds, function(err, hash){
      return db.query('insert into card (cardnumber, pincode) values(?,?)',
        [card.cardnumber, hash], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from card where id_card=?', [id], callback);
  },
  update: function(id, card, callback) {
    bcrypt.hash(card.pincode, saltRounds, function(err, hash){
      return db.query('update card set cardnumber=?, pincode=? where id_card=?',
        [card.cardnumber, hash, id], callback);
    });
  }
};
module.exports = card;
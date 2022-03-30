const db = require('../database');

const card = {
  getById: function(id, callback) {
    return db.query('select * from card where id_card=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from card', callback);
  },
  add: function(card, callback) {
    return db.query(
      'insert into card (cardnumber,pincode) values(?,?)',
      [card.cardnumber, card.pincode],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from card where id_card=?', [id], callback);
  },
  update: function(id, card, callback) {
    return db.query(
      'update card set cardnumber=?, pincode=? where id_card=?',
      [card.cardnumber, card.pincode, id],
      callback
    );
  }
};
module.exports = card;
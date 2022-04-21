const db = require('../database');

const account = {
  getById: function(id, callback) {
    return db.query('select * from bank_account where id_bank_account=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from bank_account', callback);
  },
  add: function(account, callback) {
    return db.query(
      'insert into bank_account (id_bank_account, account_number, balance) values(?,?,?)',
      [account.id_bank_account, account.account_number, account.balance],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from bank_account where id_bank_account=?', [id], callback);
  },
  update: function(id, account, callback) {
    return db.query(
      'update bank_account set id_bank_account=?, account_number=?, balance=? where id_bank_account=?',
      [account.id_bank_account, account.account_number, account.balance, id],
      callback
    );
  }
};
module.exports = account;
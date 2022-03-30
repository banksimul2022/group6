const db = require('../database');

const action = {
  getById: function(id, callback) {
    return db.query('select * from account_action where id_account_action=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from account_action', callback);
  },
  add: function(action, callback) {
    return db.query(
      'insert into account_action (action_time, action, amount, account_number) values(?,?,?,?)',
      [action.action_time, action.action, action.amount, action.account_number],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from account_action where id_account_action=?', [id], callback);
  },
  update: function(id, action, callback) {
    return db.query(
      'update account_action set action_time=?, action=?, amount=?, account_number=? where id_action=?',
      [action.action_time, action.action, action.amount, action.account_number, id],
      callback
    );
  }
};
module.exports = action;
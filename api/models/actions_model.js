const db = require('../database');
const { param } = require('../routes/actions');

const action = {

  withdrawal: function(parameters, callback) {
    return db.query('CALL credit_withdrawal(?,?)', 
    [parameters.id, parameters.amount], callback);
  },


  getTenActions: function(id, callback) {
    return db.query('SELECT * FROM account_action JOIN client ON client.id_client = account_action.id_client WHERE client.id_client = ? ORDER BY action_time DESC limit 10;',
     [id], callback);
  },

  

  getFiveActions: function(id, callback) {
    return db.query('SELECT * FROM account_action JOIN client ON client.id_client = account_action.id_client WHERE client.id_client = ? ORDER BY action_time DESC limit 5;',
     [id], callback);
  },


  Prev10Actions: function(parameters, callback) {
    return db.query('CALL previous10actions(?,?)', 
    [parameters.arvo, parameters.id], callback);
  },

  getBalance: function(id, callback) {
    return db.query('SELECT * FROM bank_account JOIN client_has_bank_account ON client_has_bank_account.id_bank_account = bank_account.id_bank_account JOIN client ON client.id_client = client_has_bank_account.id_client WHERE client.id_client=?',
     [id], callback);
  },

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
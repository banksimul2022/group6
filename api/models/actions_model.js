const db = require('../database');
const { param } = require('../routes/actions');

const action = {

  withdrawal: function(parameters, callback) {
    return db.query('CALL credit_withdrawal(?,?,?)', //id = id_bank_account
    [parameters.account, parameters.client, parameters.amount], callback);
  },

  transfer: function(parameters, callback) {
    return db.query('CALL transfer(?,?,?);', 
    [parameters.accSend, parameters.accNumberRecv, parameters.amount], callback);
  },

  
  clientIDfromCard: function(card, callback) {
    return db.query('SELECT id_client FROM card WHERE cardnumber = ?;',
     [card], callback);
  },

  accountIDfromCard: function(card, callback) {
    return db.query('select bank_account.id_bank_account FROM bank_account JOIN CARD ON card.id_bank_account = bank_account.id_bank_account WHERE cardnumber = ?;',
     [card], callback);
  },


  getTenActions: function(id, callback) {
    return db.query('SELECT * FROM bank_account JOIN card ON card.id_bank_account = bank_account.id_bank_account JOIN client ON client.id_client = card.id_client JOIN account_action ON account_action.id_client = client.id_client WHERE bank_account.id_bank_account = ? ORDER BY id_account_action DESC limit 10;;',
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
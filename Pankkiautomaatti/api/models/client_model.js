const db = require('../database');

const client = {
  getById: function(id, callback) {
    return db.query('select * from client where id_client=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from client', callback);
  },
  add: function(client, callback) {
    return db.query(
      'insert into client (name,address,pnumber) values(?,?,?)',
      [client.name, client.address, client.pnumber],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from client where id_client=?', [id], callback);
  },
  update: function(id, client, callback) {
    return db.query(
      'update client set name=?,address=?, pnumber=? where id_client=?',
      [client.name, client.address, client.pnumber, id],
      callback
    );
  }
};
module.exports = client;
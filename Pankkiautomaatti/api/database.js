const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'bankuser',
  password: 'bankpass',
  database: 'bankautomat'
});
module.exports = connection;
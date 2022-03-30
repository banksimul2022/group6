const db = require('../database');

const login={
  checkPincode: function(cardnumber, callback) {
      return db.query('SELECT pincode FROM card WHERE cardnumber=?',[cardnumber], callback); 
    }
};
          
module.exports = login;
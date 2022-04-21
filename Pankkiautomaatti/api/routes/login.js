const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.cardnumber && request.body.pincode){
      const cardnumber = request.body.cardnumber;
      const pincode = request.body.pincode;
        login.checkPincode(cardnumber, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(pincode,dbResult[0].pincode, function(err,compareResult) {
                if(compareResult) {
                  console.log("success");
                  response.send(true);
                }
                else {
                    console.log("wrong pincode");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("Cardnumber does not exist");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("Cardnumber or pincode missing");
      response.send(false);
    }
  }
);

module.exports=router;
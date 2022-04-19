const express = require('express');
const router = express.Router();
const action = require('../models/actions_model');

router.get('/:id?',
 function(request, response) {
  if (request.params.id) {
    action.getById(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } else {
    action.getAll(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});


router.post('/withdrawal', 
function(request, response) {
  action.withdrawal(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.post('/transfer', 
function(request, response) {
  action.transfer(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.get('/clientIDfromCard/:card?',
 function(request, response) {
  if (request.params.card) {
    action.clientIDfromCard(request.params.card, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } 
});

router.get('/accountIDfromCard/:card?',
 function(request, response) {
  if (request.params.card) {
    action.accountIDfromCard(request.params.card, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } 
});


router.get('/TenActions/:id?',
 function(request, response) {
  if (request.params.id) {
    action.getTenActions(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } 
});

router.post('/Prev10Actions', 
function(request, response) {
  action.Prev10Actions(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult[0]);
    }
  });
});


router.get('/FiveActions/:id?',
 function(request, response) {
  if (request.params.id) {
    action.getFiveActions(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } 
});

router.get('/balance/:id?',
 function(request, response) {
  if (request.params.id) {
    action.getBalance(request.params.id, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  } 
});

router.post('/', 
function(request, response) {
  action.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});


router.delete('/:id', 
function(request, response) {
  action.delete(request.params.id, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:id', 
function(request, response) {
  action.update(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;
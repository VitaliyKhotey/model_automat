//
//  Model.h
//  Model_automat
//
//  Created by Vitaly on 21.12.13.
//  Copyright (c) 2013 Vitaly. All rights reserved.
//

#ifndef __Model_automat__Model__
#define __Model_automat__Model__

#include <iostream>
#include "Specialist.h"
#include "Customer.h"
#include "Automat.h"

class Model
{
public:
    void do_spec_job(Automat*);
    void do_cust_job(Automat*, int n);
    Model(Specialist*);
private:
    Specialist *specialist;
    Customer *customer;
};

#endif /* defined(__Model_automat__Model__) */


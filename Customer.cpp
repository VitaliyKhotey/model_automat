//
//  Customer .cpp
//  Model_automat
//
//  Created by Vitaly on 09.11.13.
//  Copyright (c) 2013 Vitaly. All rights reserved.
//

#include "Customer.h"


void Customer::get_list_drinks()
{
    this->dislpay->get_list_drinks();
}

void Customer::set_display(Display *d)
{
    this->dislpay=d;
}


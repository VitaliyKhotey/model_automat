//
//  Customer .h
//  Model_automat
//
//  Created by Vitaly on 09.11.13.
//  Copyright (c) 2013 Vitaly. All rights reserved.
//

#ifndef __Model_automat__Customer___
#define __Model_automat__Customer___

#include <iostream>
#include "Display.h"

#endif /* defined(__Model_automat__Customer___) */

class Customer
{
public:
    void get_list_drinks();
    void insert_money();
    void buy_drink(int number);
private:
    Display *dislpay;
    
};
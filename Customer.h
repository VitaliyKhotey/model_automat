#ifndef __Model_automat__Customer___
#define __Model_automat__Customer___

#include <iostream>
#include "Display.h"


class Customer
{
public:
    void get_list_drinks();
    void insert_money();
    void buy_drink(int number);
    void set_display(Display*);
private:
    Display *dislpay=0;

};
#endif /* defined(__Model_automat__Customer___) */

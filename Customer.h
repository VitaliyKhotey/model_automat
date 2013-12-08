#ifndef Customer___
#define Customer___

#include <iostream>
#include "Display.h"

class Customer
{
public:
    void get_list_drinks();
    void insert_money(double);
    void buy_drink(int number);
    void set_display(Display*);
    void get_change();
private:
    Display *dislpay=NULL;

};

#endif

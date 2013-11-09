#include "Customer.h"

void Customer::get_list_drinks()
{
    this->dislpay->get_list_drinks();
}

void Customer::set_display(Display *d)
{
    this->dislpay=d;
}


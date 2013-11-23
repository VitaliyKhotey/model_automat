#include "Customer.h"

void Customer::get_list_drinks()
{
    this->dislpay->get_list_drinks();
}

void Customer::set_display(Display *d)
{
    this->dislpay=d;
}

void Customer::insert_money(double money)
{
    this->dislpay->insert_money(money);
}

void Customer::buy_drink(int number)
{
    if(number>0 && number<=dislpay->get_quantityDrink())
    {
    number--;
        dislpay->buy_drink(number);
    
    }
    else
        std::cout<<"incorrect number\n";
    
    
}
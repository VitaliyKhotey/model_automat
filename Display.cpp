#include "Display.h"

Display::Display(Automat *a)
{
    this->automat=a;
}

Display::~Display()
{

}

void Display::get_list_drinks()
{
    this->automat->get_list_drinks();
}

void Display::insert_money(double money)
{
    this->automat->set_client_money(money);
    std::cout<<"Inserted " << money <<"$.\t"<<"Your balance is "<<automat->get_client_money()<<"$.\n";
    
}

int Display::get_quantityDrink()
{
    return automat->MAX_CONTAINERS;
}

bool Display::validate_money(int number)
{
    return automat->get_price(number)<=automat->get_client_money();
}


void Display::buy_drink(int number)
{
    if(validate_money(number))
    {
        automat->give_drink(number);
        
    }
    else {
        std::cout<<"Not enough money. Please, insert additional "<<automat->get_price(number)-automat->get_client_money()<<"$\n";
    }
        
}
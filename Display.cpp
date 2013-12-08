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

void Display::show_balance()
{
    std::cout<<"Your balance is "<<automat->get_client_money()<<"$.\n";
}

bool Display::validate_money(double money) {
    return (int)(100*money) % 50==0;
}

void Display::insert_money(double money)
{
    if (validate_money(money)) {
    this->automat->set_client_money(this->automat->get_client_money()+money);
    std::cout<<"Inserted " << money <<"$.\t";
    show_balance();
    }
    else{
        this->automat->show_suitable_banknots();
    }
}

int Display::get_quantityDrink()
{
    return automat->MAX_CONTAINERS;
}

bool Display::is_enough(int number)
{
    return automat->get_price(number)<=automat->get_client_money();
}


void Display::buy_drink(int number)
{
    if(is_enough(number))
    {
        automat->give_drink(number);
        
    }
    else {
        std::cout<<"#Not enough money. Please, insert additional "<<automat->get_price(number)-automat->get_client_money()<<"$ #\n";
    }
    show_balance();
        
}

void Display::get_change() {
    std::cout<<"Your change is "<<automat->get_client_money()<<"$\n";
    automat->set_client_money(0);
    
}
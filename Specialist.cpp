#include "Specialist.h"
#include <iostream>

Specialist::Specialist()
{
};

Specialist::~Specialist()
{
    //delete automat;
    std::cout<<"spec deleted\n";
};

void Specialist::set_automat(Automat* a)
{
    automat=a;
}

void Specialist::open_lock()
{
    if(automat->is_locked())
    {
        automat->toggle_lock();
        std::cout<<"Automat is unlocked\n";
    }
    else
        std::cout<<"Alert Automat is already unlocked\n";
}

Automat *Specialist::get_automat() {
    return this->automat;
}


void Specialist::close_lock()
{
    if(!automat->is_locked())
    {
        automat->toggle_lock();
        std::cout<<"Automat is locked\n";
    }
    else
        std::cout<<"Alert Automat is already locked\n";
}

void Specialist::open()
{   if(!automat->is_locked()){
    if(!automat->is_open())
    automat->open_close();
    std::cout<<"Automat is opened"<<"\n";}
    else std::cout<<"can't open , becouse automat is locked"<<"\n";
    
}

void Specialist::close()
{
    if (automat->is_open())
        automat->open_close();
    std::cout<<"Automat is closed";
}

void Specialist::fill_in_drinks()
{
    if(automat->is_open())
    {
    for (int i=0; i<5; i++)
    {

        automat->get_containers()->at(i)->fill();
    }
    }
    else {
        std::cout<<"Can't fill, automat is closed"<<"\n";
    }
}

void Specialist::add_coins()
{
    if(automat->is_open())
    {
        if (this->automat->money<automat->MAX_MONEY) {
        
    std::cout<<"inserted "<<automat->MAX_MONEY-automat->money<<"\n";
    automat->set_money(automat->MAX_MONEY);
    }
    }
    else {
        std::cout<<"Can't add coins, automat is closed"<<"\n";
    }
}


void Specialist::show_all_volumes() {
    automat->show_all_volumes();
}


void Specialist::take_profit()
{
    if(automat->is_open())
    {
    std::cout<<"Profit = "<<automat->get_money()-automat->MAX_MONEY<<"$\n";
    automat->set_money(automat->MAX_MONEY);
    }
    else {
        std::cout<<"Can't take profit, automat is closed"<<"\n";
    }
}




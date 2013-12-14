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
{
    std::cout<<"Automat is opened";
}

void Specialist::close()
{
    std::cout<<"Automat is closed";
}

void Specialist::fill_in_drinks()
{
    for (int i=0; i<5; i++)
    {

        automat->get_containers()->at(i)->fill();
    }
    automat->show_all_volumes();
}

void Specialist::add_coins()
{
    std::cout<<"inserted "<<automat->MAX_MONEY-automat->money<<"\n";
    automat->set_money(automat->MAX_MONEY);
}


void Specialist::show_all_volumes() {
    automat->show_all_volumes();
}


void Specialist::take_profit()
{
    std::cout<<"Profit = "<<automat->get_money()-automat->MAX_MONEY<<"$\n";
    automat->set_money(automat->MAX_MONEY);
}




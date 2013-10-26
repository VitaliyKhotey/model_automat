#include "Specialist.h"
#include <iostream>

Specialist::Specialist()
{
    std::cout<<"spec created\n";
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

}

void Specialist::add_coins()
{
    std::cout<<"inserted "<<automat->MAX_MONEY-automat->money<<"\n";
    automat->money=automat->MAX_MONEY;
}





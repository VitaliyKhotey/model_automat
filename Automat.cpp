#include "Automat.h"

Automat::Automat()
{
    containers=new std::vector<Container*>(5);
    for (int i=0; i<MAX_CONTAINERS; i++)
    {
        containers->at(i)=new Container();
        // std::cout<<"#"<<i<<" created\n";
    }
}

Automat::~Automat()
{
    std::cout<<"delete Automat";
}

void Automat::fill_container(int n,Drink *drink)
{
    this->containers->at(n)->fill(drink);
}

std::vector<Container*>* Automat::get_containers()
{
    return this->containers;
}

void Automat::toggle_lock()
{
    if(lock)
        lock=false;
    else lock=true;
}

bool Automat::is_locked()
{
    return lock;
}

double Automat::get_money()
{
    return money;
}

double  Automat::get_clientmoney()
{
    return client_money;
}

void Automat::set_money(double money)
{
    this->money=money;
}

void Automat::set_clientmoney(double money)
{
    this->client_money = money;
}

void Automat::show_suitable_banknots()
{
    std::cout<<"Waring : Enter 2,5,10 $\n ";
}

void Automat::get_list_drinks()
{
    for (int i=0; i<MAX_CONTAINERS; i++)
    {
        Drink *d ;
        if((d = containers->at(i)->get_drink())!=NULL)
            std::cout<<"#"<<i+1<<" "<<d<<"\n";
    }
}

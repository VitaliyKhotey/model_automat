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

double  Automat::get_client_money()
{
    return client_money;
}

void Automat::set_money(double money)
{
    this->money=money;
}

void Automat::set_client_money(double money)
{
    this->client_money = money;
}

void Automat::show_suitable_banknots()
{
    std::cout<<"####Enter paper money or 50 cents####\n";
}

void Automat::get_list_drinks()
{
    for (int i=0; i<MAX_CONTAINERS; i++)
    {
        Drink *d ;
        if((d = containers->at(i)->get_drink())!=NULL)
        {std::cout<<"#"<<i+1<<" "<<d<<"\n";}
    }
}


double Automat::get_price(int number)
{
    return get_containers()->at(number)->get_drink()->get_price();
    
}

double Automat::get_volume(int number)
{
    return get_containers()->at(number)->get_volume();
}

void Automat::give_drink(int number)
{
    if(get_volume(number)>=PORTION)
    {
        //Decrease containers volume
        get_containers()->at(number)->set_volume(this->get_volume(number)-PORTION);
        std::cout<<"Take drink "<<get_containers()->at(number)->get_drink()<<"\n";
        
        //decrease clients money
        this->set_client_money(get_client_money()-get_price(number));
        //increase automat money
        set_money(this->get_money()+get_price(number));
        
        
    }
    else{
        std::cout<<"####Container is empty, choose another####\n";
    }
}

void Automat::show_all_volumes(){
    std::cout<<"---------INFO FOR SPECIALIST---------\n";
    for (int i=0; i<5; i++)
    {
        std::cout<<"container number #"<<i+1<<" "<<get_containers()->at(i);
    }
    std::cout<<"Automat money: "<<get_money()<<"\n";
}

#include "Automat.h"

Automat::Automat()
{
    containers=new std::vector<Container*>(5);
    for (int i=0; i<MAX_CONTAINERS; i++)
    {
        containers->at(i)=new Container();
        std::cout<<"#"<<i<<" created\n";
    }
    std::cout<<"Automat creted\n";
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

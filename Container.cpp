#include "Container.h"

Container::Container(Drink *drink)
{
    this->drink=drink;
}

Container::Container()
{
}

Container::~Container()
{
    std::cout<<"Container deleted\n";
}

void Container::fill(Drink* drink)
{
    if(this->drink==NULL)
    {
        this->drink=drink;
        volume=MAX_VOLUME;
    }
    else if(this->drink->get_name()==drink->get_name())
    {
        volume=MAX_VOLUME;
    }
    else std::cout<<"container already has "<<this->drink->get_name()<<" "<<this->volume<<"ml\n";
}

Drink* Container::get_drink()
{
    return this->drink;
}

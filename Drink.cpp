#include "Drink.h"

Drink::~Drink()
{
}

Drink::Drink(std::string n, double p)
{
    name=n;
    price=p;
}

double Drink::get_price()
{
    return price;
}

std::string Drink::get_name()
{
    return name;
}

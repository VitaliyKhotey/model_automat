#ifndef __Model_automat__Drink___
#define __Model_automat__Drink___

#include <iostream>
#include <string>

class Drink
{

public:
    double get_price();
    std::string get_name();
    Drink();
    Drink(std::string, double);
    ~Drink();
    friend std::ostream& operator<<(std::ostream& out,const Drink* d)
    {
        out<<d->name<<" price="<<d->price<<"$";
        return out;
    }

private:
    double price;
    std::string name;

};

#endif

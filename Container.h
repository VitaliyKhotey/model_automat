#ifndef Container__
#define Container__

#include <iostream>
#include "Drink.h"

class Container
{

public:
    Container(Drink*);
    Container();
    ~Container();
    const double MAX_VOLUME=5000;
    const double STANDART_VOLUME=4000;
    const double START_VOLUME=0;
    Drink* get_drink();
    double get_volume();
    void fill_max(Drink*);
    void fill(Drink*);
    void fill();
    void set_volume(double);

private:
    Drink* drink;
    double volume;

    friend std::ostream& operator<<(std::ostream& out,const Container* c)
    {
        if (c->drink!=NULL)
        {
            out<<c->drink<<" ="<<c->volume<<"ml\n";
        }
        else
        {
            out<<"container is empty\n";
        }

        return out;
    }
};

#endif

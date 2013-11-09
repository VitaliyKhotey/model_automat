#ifndef __Model_automat__Container___
#define __Model_automat__Container___

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
    Drink* get_drink();
    double get_volume();
    void fill_max(Drink*);
    void fill(Drink*);
    void fill();

private:
    Drink* drink;
    double volume;

    friend std::ostream& operator<<(std::ostream& out,const Container* c)
    {
        if (c->drink!=NULL) {
             out<<c->drink<<" ="<<c->volume<<"ml\n";
        }else
        {
            out<<"container is empty\n";
        }

        return out;
    }
};
#endif /* defined(__Model_automat__Customer___) */

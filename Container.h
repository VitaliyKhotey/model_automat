//
//  Container.h
//  model_automat
//
//  Created by Vitaly Khotey on 07.10.13.
//  Copyright (c) 2013 Vitaly Khotey. All rights reserved.
//


#define __model_automat__Container__

#include <iostream>
#include "Drink.h"

class Container
{

public:
    Container(Drink*);
    Container();
    ~Container();
    const double MAX_VOLUME=5000;
    Drink* get_drink();
    double get_volume();
    void fill(Drink*);

private:
    Drink* drink;
    double volume;

    friend std::ostream& operator<<(std::ostream& out,const Container* c)
    {
        out<<c->drink<<" ="<<c->volume<<"ml\n";
        return out;
    }
};

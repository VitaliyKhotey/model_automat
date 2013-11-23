#ifndef Display__
#define Display__

#include <iostream>
#include "Automat.h"

class Display
{
private:
    Automat *automat;
public:
    Display(Automat *a);
    ~Display();
    void get_list_drinks();
    void insert_money(double);
    int get_quantityDrink();
    void buy_drink(int number);
    bool validate_money(int number);

};

#endif

#include <iostream>
#include "Specialist.h"
using namespace std;
int main(int argc, const char * argv[])
{
    Specialist *s=new Specialist();
    Automat *a= new Automat();
    Drink* cola=new Drink("Cola",5.0);
    Drink* fanta=new Drink("Fanta",6.0);

    s->set_automat(a);
    a->fill_container(0, cola);
    a->fill_container(1, fanta);

    cout<<cola;
    cout<<fanta;
    cout<<a->get_containers()->at(1);
    s->add_coins();
    s->fill_in_drinks();
    cout<<"-----------------------------------\n";
    

    return 0;
}


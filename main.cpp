#include <iostream>
#include "Specialist.h"
#include "Customer.h"
//#include "Display.h"
using namespace std;
int main(int argc, const char * argv[])
{
    Specialist *s=new Specialist();
    Automat *a= new Automat();
    Drink* cola=new Drink("Cola",5.0);
    Drink* fanta=new Drink("Fanta",6.0);
    Drink* pepsi=new Drink("Pepsi",7.0);
    Drink* sprite=new Drink("Sprite",4.5);
    Drink* tea=new Drink("Tea",10.0);

    s->set_automat(a);
    a->fill_container(0, cola);
    a->fill_container(1, fanta);
    a->fill_container(2, pepsi);
    a->fill_container(3, sprite);
    a->fill_container(4, tea);


    //Drink* teab=new Drink("Teab",10.0);
    //a->fill_container(5, teab);

    s->add_coins();
    s->fill_in_drinks();
    cout<<"-----------------------------------\n";

    Display *d = new Display(a);
    Customer *c = new Customer();
    c->set_display(d);
    c->get_list_drinks();


    return 0;
}


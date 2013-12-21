#include <iostream>
#include "Specialist.h"
#include "Customer.h"


int main(int argc, const char * argv[])
{
    Specialist *s=new Specialist();
    Automat *a= new Automat();
    Drink* cola=new Drink("Cola",5.0);
    Drink* fanta=new Drink("Fanta",6.0);
    Drink* pepsi=new Drink("Pepsi",7.0);
    Drink* sprite=new Drink("Sprite",4.0);
    Drink* tea=new Drink("Tea",10.0);
    a->fill_container(0, cola);
    a->fill_container(1, fanta);
    a->fill_container(2, pepsi);
    a->fill_container(3, sprite);
    a->fill_container(4, tea);
    //specialist
    s->show_all_volumes();
    s->open_lock();
    s->open();
    s->add_coins();
    s->fill_in_drinks();
    
    std::cout<<"--------------------TEST---------------\n";

    //Display *d = new Display(a);
    Customer *c = new Customer();
    c->set_display(a->getDisplay());
    c->get_list_drinks();
    c->insert_money(2);
    c->insert_money(2);
    c->insert_money(100);
    c->buy_drink(1);
    s->show_all_volumes();
    s->fill_in_drinks();
    c->get_change();
    //s->take_profit();
    s->show_all_volumes();


    return 0;
}






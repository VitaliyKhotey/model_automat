#include <iostream>
#include "Specialist.h"
#include "Customer.h"
#include "Model.h"


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
    Model *m = new Model(s);
    //TEST
    
    for (int i=0; i<10; i++)
    {
        m->do_spec_job(a);
        m->do_cust_job(a, i);
    }
    return 0;
}






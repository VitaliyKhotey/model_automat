//
//  Model.cpp
//  Model_automat
//
//  Created by Vitaly on 21.12.13.
//  Copyright (c) 2013 Vitaly. All rights reserved.
//

#include "Model.h"

Model::Model(Specialist* s,Customer* c)
{
    this->specialist=s;
    this->customer=c;
}

void Model::do_cust_job(Automat* a,int n){
    
    customer->set_display(a->getDisplay());
    customer->get_list_drinks();
    customer->insert_money(2);
    customer->insert_money(50);
    customer->buy_drink(n);
    customer->get_change();
}

void Model::do_spec_job(Automat* a){
    specialist->show_all_volumes();
    specialist->set_automat(a);
    specialist->open_lock();
    specialist->open();
    specialist->add_coins();
    specialist->fill_in_drinks();
    specialist->close();
    specialist->close_lock();
    specialist->show_all_volumes();
    std::cout<<"SPECIALIST FINISHED JOB"<<"\n";
}
#ifndef Automat__
#define Automat__

#include <iostream>
#include "Container.h"
#include "vector"

class Automat
{
public:
    Automat();
    ~Automat();
    const double PORTION = 50;
    const int MAX_CONTAINERS=5;
    const double MAX_MONEY=300.0;
    double get_money();
    void set_money(double money);
    void set_client_money(double money);
    double  get_client_money();
    void toggle_lock();
    void fill_container(int index, Drink *drink);
    std::vector<Container*>* get_containers();
    bool is_locked();
    friend class Specialist;
    void show_suitable_banknots();
    void get_list_drinks();
    double get_price(int number);
    void give_drink(int number);
    double get_volume(int number);
    

private:
    double money;
    double client_money;
    bool lock=true;
    std::vector<Container*> *containers;

};

#endif

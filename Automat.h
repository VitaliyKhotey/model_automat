#ifndef Automat__
#define Automat__

#include <iostream>
#include "Container.h"
#include "Display.h"
#include "vector"
class Display;
class Automat
{
public:
    Automat();
    ~Automat();
    const double PORTION = 400;
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
    bool is_open();
    void open_close();
    friend class Specialist;
    void show_suitable_banknots();
    void get_list_drinks();
    double get_price(int number);
    void give_drink(int number);
    double get_volume(int number);
    void show_all_volumes();
    Display* getDisplay();
    

private:
    double money;
    double client_money;
    bool lock=true;
    bool open=false;
    std::vector<Container*> *containers;
    Display* display;
};

#endif

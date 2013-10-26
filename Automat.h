#include <iostream>
#include "Container.h"
#include "vector"

class Automat
{
public:
    Automat();
    ~Automat();
    const int MAX_CONTAINERS=5;
    const double MAX_MONEY=300.0;
    double get_money();
    void set_money(double money);
    void set_clientmoney(double money);
    double  get_clientmoney();
    void toggle_lock();
    void fill_container(int index, Drink *drink);
    std::vector<Container*>* get_containers();
    bool is_locked();
    friend class Specialist;

private:
    double money;
    double client_money;
    bool lock=true;
    std::vector<Container*> *containers;

};

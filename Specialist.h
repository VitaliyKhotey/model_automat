#ifndef Specialist___
#define Specialist___

#include <iostream>
#include "Automat.h"

class Specialist
{
public:
    Specialist();
    ~Specialist();
    void open_lock();
    void close_lock();
    void open();
    void close();
    void fill_in_drinks();
    void add_coins();
    void set_automat(Automat*);

private:
    Automat* automat;

};

#endif

#ifndef __Model_automat__Display__
#define __Model_automat__Display__

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

};

#endif

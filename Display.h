//
//  Display.h
//  Model_automat
//
//  Created by Vitaly on 09.11.13.
//  Copyright (c) 2013 Vitaly. All rights reserved.
//

#ifndef __Model_automat__Display__
#define __Model_automat__Display__

#include <iostream>
#include "Automat.h"


#endif /* defined(__Model_automat__Display__) */

class Display
{
private:
    Automat *automat;
public:
    Display(Automat *a);
    ~Display();
    void get_list_drinks();
    
};
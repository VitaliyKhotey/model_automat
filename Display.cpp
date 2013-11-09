//
//  Display.cpp
//  Model_automat
//
//  Created by Vitaly on 09.11.13.
//  Copyright (c) 2013 Vitaly. All rights reserved.
//

#include "Display.h"


Display::Display(Automat *a)
{
    this->automat=a;
}

Display::~Display()
{
    
}

void Display::get_list_drinks()
{
    this->automat->get_list_drinks();
}
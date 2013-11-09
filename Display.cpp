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

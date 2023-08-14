// Distinction Task 1.3

#include <iostream>
#include "Menu.h"

int main()
{
    Menu menuObject;
    do
    {
        menuObject.printMenu();
        menuObject.outputGenerator(menuObject.getSelector());
    }while(menuObject.getSelector() != 4);
}



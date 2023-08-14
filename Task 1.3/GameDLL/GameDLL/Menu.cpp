#include "pch.h"
#include "Menu.h"
#include <iostream>

int Menu::printMenu()
{
    std::cout << "Please select one of the following calculation options with an integer input:\n";
    std::cout << "(1) Area of a Circle.\n";
    std::cout << "(2) Area of a Square.\n";
    std::cout << "(3) Area of a Triangle.\n";
    std::cout << "(4) Exit Program.\n";
    std::cin >> fSelector;
    inputValid();
    return fSelector;
}

bool Menu::inputValid()
{
    if (std::cin.fail())
    {
        std::cout << "The input was not valid, please try again.\n\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        return false;
    }
    else
    {
        return true;
    }
}

void Menu::outputGenerator(int selector)
{
    // local variables
    float lRadius;
    float lBase;
    float lHeight;
    float lOutput;

    switch (selector)
    {
    case 1:
        std::cout << "Enter the Radius of the Circle:";
        std::cin >> lRadius;
        if (inputValid())
        {
            lOutput = fCircle.CalculateArea(lRadius);
            fCircle.printArea(lOutput);
            //std::cout << "The area of the circle is " << lOutput << "\n\n";
        }
        break;
    case 2:
        std::cout << "Enter the Base of the Square:";
        std::cin >> lBase;
        if (inputValid())
        {
            std::cout << "Enter the Height of the Square:";
            std::cin >> lHeight;
            if (inputValid())
            {
                lOutput = fSquare.CalculateArea(lBase, lHeight);
                fSquare.PrintArea(lOutput);
                //std::cout << "The area of the square is " << lOutput << "\n\n";
            }
        }

        break;
    case 3:
        std::cout << "Enter the Base of the Triangle:";
        std::cin >> lBase;
        if (inputValid())
        {
            std::cout << "Enter the Height of the Triangle:";
            std::cin >> lHeight;
            if (inputValid())
            {
                lOutput = fTriangle.CalculateArea(lBase, lHeight);
                fTriangle.PrintArea(lOutput);
                //std::cout << "The area of the square is " << lOutput << "\n\n";
            }
        }
        break;
    case 4:
        std::cout << "Thankyou for using AreaCalculator. \n\nThe program will exit now.\n\n";
        break;
    default:
        std::cout << "The menu item selected was not defined, please try again.\n\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
}

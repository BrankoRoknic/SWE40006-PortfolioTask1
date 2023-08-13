// Credit Task 1.2

#include <iostream>

const float PIE = 3.14159;

// creates a console menu and returns the user's selection.
int menu()
{
    int lSelector;
    std::cout << "Please select one of the following calculation options with an integer input:\n";
    std::cout << "(1) Area of a Circle.\n";
    std::cout << "(2) Area of a Square.\n";
    std::cout << "(3) Area of a Triangle.\n";
    std::cout << "(4) Exit Program.\n";
    std::cin >> lSelector;
    return lSelector;
}

// Calculates the area of a circle and returns the result.
float circle(float radius)
{
    return (PIE * radius * radius);
}

// Calculates the area of a square and returns the result.
float square(float base, float height)
{
    return (base * height);
}

// Calculates the area of a triangle and returns the result.
float triangle(float base, float height)
{
    return (square(base, height) / 2);
}

// Checks if the user input is valid.
bool inputValid()
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

// Generates the output for the user based on their selection.
void outputGenerator(int selector)
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
            lOutput = circle(lRadius);
            std::cout << "The area of the circle is " << lOutput << "\n\n";
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
                lOutput = square(lBase, lHeight);
                std::cout << "The area of the square is " << lOutput << "\n\n";
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
                lOutput = square(lBase, lHeight) / 2;
                std::cout << "The area of the square is " << lOutput << "\n\n";
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

int main()
{
    int selector;
    do
    {
        selector = menu();
        outputGenerator(selector);       
    } while (selector != 4);
}

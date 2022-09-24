#include <iostream>

int main()
{
    // broadening is the opposite of narrowing
    // broadening give more memory for the variable to increase the max value of the variable
    // it just add additional 0 infront of 100 like 000100
    short number = 100;
    int another{number};
    std::cout << another << std::endl;

    // narrowing will narrow the variable value to the max value of the variable
    // narrowing cause data lost
    int number1 = 1'000'000;
    short another1 = number1;
    std::cout << another1;

    return 0;
}

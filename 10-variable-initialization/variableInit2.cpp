#include <iostream>

int main()
{
    //variable 1 and 2 has similar output value of 0
    int number1 = 0;
    int number2{};
    //variable 3 will output the value in integer form
    //while variable 4 will not allow the code to compile 
    int number3 = 1.2;
    int number4{1.3};

    std::cout << number2;
    return 0;
}  

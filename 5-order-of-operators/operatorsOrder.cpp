#include <iostream>

int main()
{
    // * and / have higher order than + and -
    // except with the existance of bracket() 
    double x = (1 + 2) * 3;
    std::cout << x;
    return 0;
}

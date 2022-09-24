#include <iostream>

int main()
{
    int x = 10;
    int y = x++; // x = 11, y = 10, first y has the value of x then add by 1
    int z = ++x; // same as x++ but x + 1 first then become the value of z

    std::cout << x;
    return 0;
}
#include <iostream>

int main()
{
    int x = 10;
    int y = 20;

    // std::cout is standard output stream
    // << is stream insertion operator

    std::cout << "x1 = " << x << std::endl; // std::endl is to end line of output in console
    // line of code above and below have the same output
    std::cout << "x2 = ";
    std::cout << x << std::endl;

    std::cout << "x3 = " << x << std::endl
              << "y1 = " << y;

    return 0;
}

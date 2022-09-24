//calculate area of circle

#include <iostream>
#include <cmath>

int main()
{
    double radius;
    const double pi = 3.14;

    std::cout << "Enter Radius: ";
    std::cin >> radius;

    double circleArea = pi * pow(radius, 2);

    std::cout << "Area of Circle: " << circleArea;

    return 0;
}

//convert temperature from fahrenheit to celsius

#include <iostream>

int main()
{
    double fahrenheit;
    double celsius;

    std::cout << "Enter Temperature(F): ";
    std::cin >> fahrenheit;
    std::cout << "Temperature: " << ((fahrenheit - 32) * 5) / 9 << " Degree Celsius";
    
    return 0;
}

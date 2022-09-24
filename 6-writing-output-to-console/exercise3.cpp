// show total sale, state tax, county tax, total tax

#include <iostream>

int main()
{
    double totalSales = 95000;
    const double stateTaxRate = 4;
    const double countyTaxRate = 2;

    double totalStateTax = 95000 * (stateTaxRate / 100);
    double totalCountyTax = 95000 * (countyTaxRate / 100);

    double totalTax = totalCountyTax + totalStateTax;

    std::cout << "Total Sale: $" << totalSales << std::endl;
    std::cout << "State Tax: $" << totalStateTax << std::endl;
    std::cout << "County Tax: $" << totalCountyTax << std::endl;
    std::cout << "Total Tax: $" << totalTax << std::endl;

    return 0;
}

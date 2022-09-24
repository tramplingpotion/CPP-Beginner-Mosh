#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(nullptr));   //srand is seed random 
    int number = rand ()%1000;    //rand is random fuction, %10 is to indicate random upperlimit 
    std::cout<<number;  
    return 0;
}

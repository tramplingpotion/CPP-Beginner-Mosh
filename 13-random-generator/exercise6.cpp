//create dice game

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const short minVal = 1;
    const short maxVal = 6;

    srand(time(0));
    //formula for upper and lower limit of random value
    int dice1 = rand()%(maxVal-minVal+1)+minVal;   
    int dice2 = rand()%(maxVal-minVal+1)+minVal;   

    std::cout<<dice1<<", "<<dice2;
    return 0;
}

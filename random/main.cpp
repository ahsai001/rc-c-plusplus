#include <iostream>
#include <string>
#include "../io.h"
#include <cstdlib>

int getRandomNumber(int min, int max){
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min+static_cast<int>((max-min+1)*(std::rand()*fraction));
}

int main(){
    std::srand(13345);

    for(int count=1; count<= 100; ++count){
        //std::cout << std::rand() << "\t";
        std::cout << getRandomNumber(3,30) << "\t";
        if(count % 5 == 0){
            IO::printLineSpace(2);
        }
    }
    return 0;
}
#include <iostream>
#include <string>
#include "../io.h"
#include <cstdlib>
#include <array>

int main(){
    const int size = 365;
    //size harus sudah ada nilainnya ketika compile time
    double temparature[size] = {};
    temparature[4] = 10.0;

    std::cout << temparature[4];




    std::array<int, 4> myArray = {2,4,6,3};
    myArray.size();
    myArray.fill(10);
    myArray.begin();

    return 0;
}
#include <iostream>
#include <string>
#include "../io.h"
#include <cstdlib>

int main(){
    const int size = 365;
    //size harus sudah ada nilainnya ketika compile time
    double temparature[size] = {};
    temparature[4] = 10.0;

    std::cout << temparature[4];

    return 0;
}
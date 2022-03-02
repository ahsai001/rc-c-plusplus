#include <iostream>
#include <string>
#include "../io.h"

int main(){
    std::string name = IO::readString("nama anda");
    int age = IO::readNumber("angka pertama");

    

    return 0;
}
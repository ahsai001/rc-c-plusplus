#include <iostream>
#include "../io.h"

namespace Foo{
    int x;
    namespace Goo{
        int y;
    }
}

namespace Oke{
    int z;
}

int main(){
    int x = IO::readNumber("1");
    int y = IO::readNumber("2");

    Foo::x = 0;
    Foo::Goo::y = 1;
    Oke::z = 2;

    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }// temp dies here

    IO::writeString("angka pertama : "+std::to_string(x)+" dan angka kedua : "+std::to_string(y));
    return 0;
}
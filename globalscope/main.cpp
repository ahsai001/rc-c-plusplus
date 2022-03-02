#include <iostream>
#include "../io.h"

int value(5);

int main(){
    int value = 7;
    value++;
    ::value--;

    IO::writeString("global value : "+std::to_string(::value));
    IO::writeString("local value : "+std::to_string(value));

    return 0;
}
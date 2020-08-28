#include <iostream>
#include "../io.h"

int value(5);

int main(){
    int value = 7;
    value++;
    ::value--;

    writeAnswer("global value : "+std::to_string(::value));
    writeAnswer("local value : "+std::to_string(value));

    return 0;
}
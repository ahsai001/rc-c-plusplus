#include <iostream>
#include <string>
#include "../io.h"

void countDown(int count){
    IO::writeString("push ke-"+std::to_string(count));

    if(count > 1)
        countDown(count-1);

    IO::writeString("pop ke-"+std::to_string(count));
}

int main(){
    countDown(100);
    return 0;
}
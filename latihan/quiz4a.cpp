#include <iostream>

int add(int x, int y);

int main(){
    std::cout << "3+4=" << add(3,4) <<std::endl;
    return 0;
}

int add(int x, int y){
    return x+y;
}
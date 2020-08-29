#include <iostream>
#include <string>
#include "../io.h"

void fun(int a){
    std::cout << "Hello from fun with " << a << std::endl;
}
int main(){
    void (*fun_ptr)(int) = &fun;
    void (*fun_ptr2)(int) = fun;

    (*fun_ptr)(20);
    fun_ptr2(10);
    return 0;
}
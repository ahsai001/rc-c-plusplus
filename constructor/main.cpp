#include <iostream>
#include <string>
#include "../io.h"

class A{
    public:
        A(int a) {
            std::cout << "A with " << a << std::endl;
        }
};

class B{
    private:
        A m_a;
    public:
        B() : m_a(0){ //member initializer list
            std::cout << "B\n";
        }
        
        B(int a) : m_a(a){
            std::cout << "B with " << a << std::endl;
        }
};

int main(){
    B b;
    B a(1);
    return 0;
}
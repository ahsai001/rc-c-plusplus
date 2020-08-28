#include <iostream>

int main(){ 
    bool oke(false);

    std::cout << true << std::endl;
    std::cout << false << std::endl;
    std::cout << oke << std::endl;

    std::cout << std::boolalpha;

    std::cout << true << std::endl;
    std::cout << false << std::endl;
    std::cout << oke << std::endl;

    std::cout << std::noboolalpha;

    std::cout << true << std::endl;
    std::cout << false << std::endl;
    std::cout << oke << std::endl;
    return 0;
}
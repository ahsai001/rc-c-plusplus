#include <iostream>


int main(){
    std::cout << "Masukkan angka pilihan anda :" << std::endl;
    int input;
    std::cin >> input;

    if(input==2 || input==3 || input==5 || input==7)
        std::cout << "Ini prima" << std::endl;
    else if(input==11)
        std::cout << "Ini prima" << std::endl;  
    else
        std::cout << "Ini bukan prima" << std::endl;

    return 0;
}
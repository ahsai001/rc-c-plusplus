#include <iostream>

int doubleNumber(int x){
    return 2 * x;
}

int main(){
    int input;
    std::cout << "Masukkan angka yang anda ingingkan : ";
    
    //get number from user
    std::cin >> input;

    //print double number
    std::cout << "Double number : " << doubleNumber(input) << std::endl;
}

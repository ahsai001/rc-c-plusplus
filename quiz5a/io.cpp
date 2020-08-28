#include <iostream>
int readNumber(int r){
    std::cout << "Masukkan angka ke-" << r << std::endl;
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x){
    std::cout << "hasil penambahan adalah " << x << std::endl;
}
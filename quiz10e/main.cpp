#include <iostream>

int readNumber(std::string info){
    std::cout << info;
    int input;
    std::cin >> input;
    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    }
    return input;
}

int main(){
    int array[] = {4,6,7,3,8,2,1,9,5};
    int input = -1;

    do {
        input = readNumber("Pilih angka dari 1 - 9 : ");
    } while (input < 1 || input > 9);

    std::cout << "Angka yang anda pilih adalah : " << input << "\n";
    std::cout << "Nilai dari array dengan index pilihan anda adalah : " << array[input] << "\n";
    
    return 0;
}
#include <iostream>
#include <string>


int main(){
    std::cout << "Masukkan jumlah nama yg diperlukan : ";
    int length;
    std::cin >> length;

    std::cin.ignore(32767, '\n');

    std::string *ptr = new std::string[length];

    for (int i = 0; i < length; i++)
    {
        std::cout << "Inputkan naama ke-" << i+1 << " : ";
        std::getline(std::cin, ptr[i]);
    }

    std::cout << "\n" << "Berikut nama-nama yg sudah diinputkan : " << "\n";    
    for (int i = 0; i < length; i++)
    {
        std::cout << "Nama ke-" << i+1 << " : " << ptr[i] << "\n";
    }
    

    delete[] ptr;
    return 0;
}
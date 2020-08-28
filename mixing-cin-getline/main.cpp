#include <iostream>

int main(){
    std::cout << "Pick 1 or 2: ";
    int choice = 0;
    std::cin >> choice;
    std::cin.ignore(32767,'\n');//solve this issue

    std::cout << "Now enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << ", you picked " << choice << "\n";

    return 0;
}
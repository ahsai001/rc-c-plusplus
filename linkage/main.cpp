#include <iostream>
extern int g_x; //forward declaration
extern const int g_cx; //forward declaration
int main(){
    std::cout << g_x << "\n";
    std::cout << g_cx << "\n";
    return 0;
}
#include <iostream>

int main(){
    int i1 = 10;
    int i2 = 4;

    float result = (float)(i1) / i2;
    std::cout << "result 1 : " << result << "\n";
    
    float result2 = static_cast<float>(i1) / i2;
    std::cout << "result 2 : " << result2;

    return 0;
}
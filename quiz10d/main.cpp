#include <iostream>

int main(){
    int array[] = {4,6,7,3,8,2,1,9,5};
    int count = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < count; i++)
    {
        std::cout << "Element ke-" << i+1 << " : " << array[i] << "\n";
    }
    
    return 0;
}
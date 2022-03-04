#include <iostream>
#include <string>
#include "../io.h"
#include <cstdlib>
#include <vector>

int main(){
    std::vector<int> myVector = {2,4,6,3};
    myVector.size();
    std::sort(myVector.begin(), myVector.end());

    return 0;
}
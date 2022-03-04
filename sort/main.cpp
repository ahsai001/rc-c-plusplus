#include <iostream>
#include <string>
#include "../io.h"
//#include <cstdlib>
#include <algorithm>
#include <vector>

int main(){
    const int length = 5;
    int array[length] = {30,50,20,10,40};


    std::cout << "\nAscending\n";

    //ascending
    std::sort(array, array+length);

    for(int i=0; i < length; i++){
        std::cout << array[i] << ' ';
    }

    std::vector<int> vectr = {30,50,20,10,40};

    std::cout << "\nDescending\n";

    //descending
    std::sort(vectr.begin(), vectr.end(), std::greater<int>());
    for(int i=0; i < vectr.size(); i++){  
        std::cout << vectr.at(i) << ' ';
    }


    std::vector<std::string> strVectr = {
        "saifullah",
        "ahmad",
        "deni"
    };

    std::cout << "\nDescending string\n";

    //descending
    std::sort(strVectr.begin(), strVectr.end(), std::greater<std::string>());
     for(int i=0; i < strVectr.size(); i++){  
        std::cout << strVectr.at(i) << ' ';
    }
    return 0;
}
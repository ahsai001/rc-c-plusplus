#include <iostream>
#include <string>
#include "io.h"

namespace IO{
    int readNumber(std::string str1){
        std::cout << str1 << ": "<< std::endl;
        int x;
        std::cin >> x;
        std::cin.ignore(32767,'\n');
        return x;
    }

    std::string readString(std::string str1){
        std::cout << str1 << ": "<< std::endl;
        std::string strOutput;
        std::getline(std::cin, strOutput);
        return strOutput;
    }

    void writeString(std::string prefix){
        std::cout << prefix << std::endl;
    }

    void printLineSpace(int lineNumber){
        for(int i=0; i<lineNumber; i++){
            std::cout << std::endl;
        }
    }

    void printHeader(std::string info){
        std::cout << "================= " << info << " =================" << std::endl;
    }

    void printFooter(std::string info){
        std::string header = "================= " + info + " =================";
        std::string line;
        for(int i=0; i<header.length(); i++){
            line += "=";
        }
        std::cout << line << std::endl;
    }
}
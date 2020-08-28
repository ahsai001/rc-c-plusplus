#ifndef IO_H
#define IO_H
#include <string>

namespace IO{
    int readNumber(std::string str1);
    std::string readString(std::string str1);
    void writeString(std::string prefix);
    void printLineSpace(int lineNumber);
    void printHeader(std::string info);
    void printFooter(std::string info);
}

#endif
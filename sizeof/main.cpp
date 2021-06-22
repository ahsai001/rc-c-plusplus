#include <iostream>
#include <string>

void writeSizeOf(std::string type, int size){
    std::cout << type << " size:\t\t" << size << " bytes" << std::endl;
}

int main(){
    writeSizeOf("char", sizeof(char));
    writeSizeOf("wchar_t", sizeof(wchar_t));
    writeSizeOf("short", sizeof(short));
    writeSizeOf("int", sizeof(int));
    writeSizeOf("long", sizeof(long));
    writeSizeOf("long long", sizeof(long long));
    writeSizeOf("float", sizeof(float));
    writeSizeOf("double", sizeof(double));
    writeSizeOf("long double", sizeof(long double));

    return 0;
}
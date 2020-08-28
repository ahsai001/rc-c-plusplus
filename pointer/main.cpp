#include <iostream>
#include <string>
#include "../io.h"
#include <typeinfo>

void changeArray(int *ptr){
    *ptr = 5;
    *(ptr+1) = 3;
    *(ptr+2) = 23;
    *(ptr+3) = 54;
    *(ptr+4) = 43;
}

int main(){
    short x = 7;
    std::cout << &x << std::endl;
    short *ptr = &x;
    std::cout << *ptr << std::endl;
    short **pptr = &ptr;
    std::cout << pptr << std::endl; //pptr value
    std::cout << *pptr << std::endl; //ptr value
    std::cout << **pptr << std::endl; //5.0

    std::cout << typeid(pptr).name() << std::endl; //PPd

    //sizeof ptr
    std::cout << "sizeof(x) : " << sizeof(x) << std::endl;
    std::cout << "sizeof(ptr) : " << sizeof(ptr) << std::endl;
    std::cout << "sizeof(*ptr) : " << sizeof(*ptr) << std::endl;

    std::cout << "sizeof(pptr) : " << sizeof(pptr) << std::endl;
    std::cout << "sizeof(*pptr) : " << sizeof(*pptr) << std::endl;
    std::cout << "sizeof(**pptr) : " << sizeof(**pptr) << std::endl;
    
    //accessing array as pointer
    int array[] = {1,1,2,3,5,8,13,21};
    std::cout << "Element 0 has value: " << array[0] << std::endl;
    std::cout << "Element 1 has value: " << array[1] << std::endl;
    std::cout << "Element 2 has value: " << array[2] << std::endl;
    std::cout << "Element 3 has value: " << array[3] << std::endl;
    std::cout << "Element 4 has value: " << array[4] << std::endl;
    changeArray(array);
    std::cout << "Element 0 has value: " << array[0] << std::endl;
    std::cout << "Element 1 has value: " << array[1] << std::endl;
    std::cout << "Element 2 has value: " << array[2] << std::endl;
    std::cout << "Element 3 has value: " << array[3] << std::endl;
    std::cout << "Element 4 has value: " << array[4] << std::endl;
    
    //dangling pointer
    int *newptr = new int;
    *newptr = 7;

    delete newptr;
    
    std::cout << *newptr;
    delete newptr;

    return 0;
}
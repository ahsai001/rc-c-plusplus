#include <iostream>
#include "../io.h"

class Display;

class Storage{
    private:
        int m_nValue;
    public:
        Storage(int value=0){
           m_nValue = value;
        }

        friend class Display;

        void storageItem(Display &display);
};

class Display{
    private:
        int m_nValue;
    public:
        Display(int value=0){
            m_nValue = value;
        }
        
        void displayItem(Storage &storage){
            storage.m_nValue = 1;
            std::cout << storage.m_nValue << std::endl;
        }

        friend class Storage;
};

//define with this, make mututal friendship OK
void Storage::storageItem(Display &display){
            display.m_nValue = 1;
            std::cout << display.m_nValue << std::endl;
        }


int main(){
    Storage storage(10);
    Display display(34);

    display.displayItem(storage);
    storage.storageItem(display);

    return 0;
    
}
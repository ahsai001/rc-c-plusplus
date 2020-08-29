#include <iostream>
#include <string>
#include "../io.h"

class Simple{
    private :
        int m_nID;
    public :
        Simple(int nID){
            std::cout << "Constructing Simple " << nID << std::endl;
            m_nID = nID;
        }

        ~Simple(){
            std::cout << "Destructing Simple " << m_nID << std::endl;
        }

        int getID(){
            return m_nID;
        }

        void showID();// forward declaration
};

void Simple::showID(){
    std::cout << m_nID << std::endl;
}

int main(){
    Simple simple(1);
    std::cout << simple.getID() << std::endl;
    
    simple.showID();
    
    Simple *pSimple = new Simple(2);
    std::cout << pSimple->getID() << std::endl;

    pSimple->showID();
    
    delete pSimple;

    return 0;
}
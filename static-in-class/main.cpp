#include <iostream>

class Something{
    private:
        static int s_value;
        int m_value;
    public:
        static int getValue(){
            return s_value; 
        }
};

int Something::s_value = 1;

int main(){
    std::cout << Something::getValue() << std::endl;
    return 0;
}
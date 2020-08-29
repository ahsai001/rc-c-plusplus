#include <iostream>
#include "../io.h"
class Accumulator{
    private:
        int m_value;
    public:
        Accumulator(){m_value = 0;}
        void add(int value){ m_value += value; };

        void showValue(){
            std::cout << "Nilai m_value:" << m_value << std::endl;
        }

        friend void reset(Accumulator &accumulator);
};

void reset(Accumulator &accumulator){
    accumulator.m_value = 0;
}


int main(){
    Accumulator acc;
    acc.add(5);
    acc.showValue();
    reset(acc);
    acc.showValue();
    
    return 0;
    
}
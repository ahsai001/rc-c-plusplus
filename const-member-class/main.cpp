#include <iostream>
#include <string>

class Something {
    private:
        std::string m_value = "hello";
    public:
        Something(){
           
        }

        void setValue(std::string value) {
            m_value = value;
        }

        std::string& getValue() {
            return m_value;
        }

        const std::string& getValue() const {
            return m_value;
        }
};

int main(){
    const Something someThing;
    //someThing.setValue("hello brother");
    std::cout << someThing.getValue();

    Something someThing2;
    someThing2.getValue() = "Hi";
    std::cout << someThing.getValue();

    return 0;
}
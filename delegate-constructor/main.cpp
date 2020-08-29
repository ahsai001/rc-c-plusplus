#include <iostream>
#include <string>
#include "../io.h"

class Employee{
    private:
        int m_id;
        std::string m_name;

    public:
        Employee(int id=0, const std::string &name="") : m_id(id), m_name(name){
            std::cout << "Employee " << m_name << " created.\n";
        }

        Employee(const std::string &name) : Employee(0,name){}
};

int main(){
    Employee employee1("ahmad");
    Employee employee2("beni");
    Employee employee3("cindy");
    return 0;
}
#include <iostream>
#include "../io.h"

class Humidity;
class Temperature{
    private:
        int m_tempt;
    public:
        Temperature(int temp=0){m_tempt = temp;}
        friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

class Humidity{
    private:
        int m_humidity;
    public:
        Humidity(int humidity=0){m_humidity = humidity;}
        friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

void printWeather(const Temperature &temperature, const Humidity &humidity){
    std::cout << "Temperatur is " << temperature.m_tempt <<
        " and humudity is " << humidity.m_humidity << std::endl;

}


int main(){
    Humidity hum(10);
    Temperature temp(12);

    printWeather(temp, hum);
    return 0;
    
}
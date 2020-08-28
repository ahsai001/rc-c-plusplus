#include <iostream>
#include <string>
#include "../io.h"

struct Advertising{
    int adsNumber;
    float clickedPercentage;
    int earningPerClick;
};

Advertising askInformation(){
    Advertising advertising;
    advertising.adsNumber = IO::readNumber("How many ads you've shown to readers?");
    advertising.clickedPercentage = IO::readNumber("What percentage of ads clicked?");
    advertising.earningPerClick = IO::readNumber("How much you earned per click?");
    return advertising;
}

void printInformation(Advertising advertising){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "================= Advertising Info =================" << std::endl;
    std::cout << "AdsNumber : " << advertising.adsNumber << std::endl;
    std::cout << "ClickedPercentage : " << advertising.clickedPercentage << std::endl;
    std::cout << "EarningPerClick : " << advertising.earningPerClick << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    float result = advertising.adsNumber*advertising.clickedPercentage*advertising.earningPerClick/100.0;
    std::cout << "Your total earning for today : " << result << std::endl;
    std::cout << "====================================================" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}


int main(){
    Advertising advertising = askInformation();
    printInformation(advertising);
    return 0;
}
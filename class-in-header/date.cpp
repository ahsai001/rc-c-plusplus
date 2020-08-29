#include <iostream>
#include "date.h"
#include "../io.h"

Date::Date(int year, int month, int day){
    setDate(year,month, day);
}

void Date::setDate(int year, int month, int day){
    m_year = year;
    m_month = month;
    m_day = day;
}

void Date::showDate(){
    IO::printLineSpace(4);
    IO::printHeader("Date Info");
    std::cout << "Current date is " << m_day << "-" << m_month << "-" << m_year << std::endl;
    IO::printFooter("Date Info");
    IO::printLineSpace(4);
}
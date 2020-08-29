#ifndef DATE_H
#define DATE_H
#include <string>

class Date{
    private:
        int m_year;
        int m_month;
        int m_day;

    public:
        Date(int year, int month, int day);
        void setDate(int year, int month, int day);
        void showDate();

        int getYear(){return m_year;};
        int getMonth(){return m_month;};
        int getDay(){return m_day;};
};

#endif
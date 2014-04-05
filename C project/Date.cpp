#include"Date.h"
#include<string>
#include<iostream>
#include<sstream>

void Date::reset() {
    year = 2012;
    month = 12;
    day = 5;
}
void Date::set(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}
void Date::fromStr(std::string str) {
    int y, m, d;
    y = ((int)str[0]-'0')*1000 + ((int)str[1]-'0')*100 + ((int)str[2]-'0')*10 + ((int)str[3]-'0');
    m = ((int)str[5]-'0')*10 + ((int)str[6]-'0');
    d = ((int)str[8]-'0')*10 + ((int)str[9]-'0');
    year = y;
    month = m;
    day = d;
}
std::string Date::toStr() const {
    std::stringstream str;
    if ((month < 10)&&(day < 10)) {
        str << Date::year << "-0" << Date::month << "-0" << Date::day;
    }
    else if (month < 10) {
        str << Date::year << "-0" << Date::month << "-" << Date::day;
    }
    else if (day <10) {
        str << Date::year << "-" << Date::month << "-0" << Date::day;
    } else {
        str << Date::year << "-" << Date::month << "-" << Date::day;
    }
    return str.str();
}


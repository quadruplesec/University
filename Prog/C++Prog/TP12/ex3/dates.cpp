#include "Date.h"
#include <ostream>
#include <vector>
#include <algorithm>

bool operator<(const Date& d1, const Date& d2)
{
    if (d1.getYear() > d2.getYear())
        return false;

    if (d1.getYear() == d2.getYear() && d1.getMonth() > d2.getMonth())
        return false;

    if (d1.getYear() == d2.getYear() && d1.getMonth() == d2.getMonth() && d1.getDay() > d2.getDay())
        return false;

    return true;
}

std::ostream& operator<<(std::ostream &out, const Date &d)
{
    int year_size = std::to_string(d.getYear()).length();
    int month_size = std::to_string(d.getMonth()).length();
    int day_size = std::to_string(d.getDay()).length();

    out << std::string(4 - year_size, '0') << d.getYear() << '/';
    out << std::string(2 - month_size, '0') << d.getMonth() << '/';
    out << std::string(2 - day_size, '0') << d.getDay();

    return out;
}
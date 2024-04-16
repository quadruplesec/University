#include "Date.h"

Date::Date()
{
    day_ = 1;
    month_ = 1;
    year_ = 1;
}

Date::Date(int year, int month, int day)
{
    day_ = day;
    month_ = month;
    year_ = year;
}

bool Date::is_before(const Date &date) const
{
    (Date) date;

    if (year_ > date.year_)
    {
        return false;
    }
    
    if (year_ == date.year_ && month_ > date.month_)
    {
        return false;
    }

    if (year_ == date.year_ && month_ == date.month_ && day_ > date.day_)
    {
        return false;
    }

    return true;
}

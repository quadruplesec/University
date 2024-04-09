#include "Date2.h"
#include <sstream>
#include <string>
#include <iostream>

Date::Date()
{
    year = 1;
    month = 1;
    day = 1;
}

Date::Date(int y, int m, int d)
{
    bool valid = true, leap_year = false;
    if (y < 1 || y > 9999 || m < 1 || m > 12 || d < 1 || d > 31)
    {
        valid = false;
    }
    
    else
    {
        year = y;
        month = m;
    }

    switch (month)
    {
        case 1: case 4: case 6: case 9: case 11:
            if (d > 30)
            {
                valid = false;
            }
             break;
                    
        case 2:
            if ((y % 400 == 0 || y % 100 != 0) && (y % 4 == 0))
            {
                leap_year = true;
            }    

            if (d > 28 && !leap_year)
            {
                valid = false;
            }

            else if (leap_year && d > 29)
            {
                valid = false;
            }

            break;
    }

    if (!valid)
    {
        year = 0;
        month = 0;
        day = 0;
    }

    else
    {
        day = d;
    }


}

Date::Date(const std::string &year_month_day)
{
    std::istringstream iss(year_month_day);
    int i, count = 0;   //count = 0: year; count = 1: month; count = 2: year
    bool valid = true, leap_year = false;

    while (!iss.eof())
    {
        if (iss >> i)
        {
            if (count == 0)
            {
                if (i < 1 || i > 9999)
                {
                    valid = false;
                }

                year = i;
                count++;
            }

            else if (count == 1)
            {
                if (i < 1 || i > 12)
                {
                    valid = false;
                }
                
                month = i;
                count++;
            }

            else
            {
                if (i < 1 || i > 31)
                {
                    valid = false;
                }

                switch (month)
                {
                    case 1: case 4: case 6: case 9: case 11:
                        if (i > 30)
                        {
                            valid = false;
                        }
                        break;
                    
                case 2:
                    if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
                    {
                        leap_year = true;
                    }    

                    if (i > 28 && !leap_year)
                    {
                        valid = false;
                    }
                    else if (leap_year && i > 29)
                    {
                        valid = false;
                    }
                    
                    break;
                }

                day = i;
            }
        }

        else
        {
            char c;
            iss.clear();
            iss >> c;

            if (c == '/')
            {
                iss.clear();
            }
            else
            {
                valid = false;
            }
        }

        if (!valid)
        {
            year = 0;
            month = 0;
            day = 0;
            break;
        }
    }
}

int Date::get_year() const
{
    return year;
}

int Date::get_month() const
{
    return month;
}

int Date::get_day() const
{
    return day;
}

bool Date::is_valid() const
{
    if (year ==  0)
    {
        return false;
    }

    return true;
}
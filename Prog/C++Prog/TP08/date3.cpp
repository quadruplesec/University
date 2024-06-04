#include "Date3.h"
#include <sstream>
#include <string>
#include <iostream>

Date::Date()
{
    yyyymmdd = "00010101";
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
        if (std::to_string(y).size() < 4)
        {
            yyyymmdd.insert(0, 4 - std::to_string(y).size(), '0');
        }
        yyyymmdd += std::to_string(y);

        if (std::to_string(m).size() < 2)
        {
            yyyymmdd.insert(4, 2 - std::to_string(m).size(), '0');
        }
        yyyymmdd += std::to_string(m);
    }

    switch (m)
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
        yyyymmdd = "00000000";
    }

    else
    {
        if (std::to_string(d).size() < 2)
        {
            yyyymmdd.insert(6, 2 - std::to_string(y).size(), '0');
        }
        yyyymmdd += std::to_string(d);
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

                if (std::to_string(i).size() < 4)
                {
                    yyyymmdd.insert(0, 4 - std::to_string(i).size(), '0');
                }
                yyyymmdd += std::to_string(i);
                count++;
            }

            else if (count == 1)
            {
                if (i < 1 || i > 12)
                {
                    valid = false;
                }
                
                if (std::to_string(i).size() < 2)
                {
                    yyyymmdd.insert(4, 2 - std::to_string(i).size(), '0');
                }
                yyyymmdd += std::to_string(i);
                count++;
            }

            else
            {
                if (i < 1 || i > 31)
                {
                    valid = false;
                }

                switch (std::stoi(yyyymmdd.substr(4, 2)))
                {
                    case 1: case 4: case 6: case 9: case 11:
                        if (i > 30)
                        {
                            valid = false;
                        }
                        break;
                    
                case 2:
                    if ((std::stoi(yyyymmdd.substr(0, 4)) % 400 == 0 || 
                    std::stoi(yyyymmdd.substr(0, 4)) % 100 != 0) && (std::stoi(yyyymmdd.substr(0, 4)) % 4 == 0))
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

                if (std::to_string(i).size() < 2)
                {
                    yyyymmdd.insert(6, 2 - std::to_string(i).size(), '0');
                }
                yyyymmdd += std::to_string(i);
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
            yyyymmdd = "00000000";
            break;
        }
    }
}

int Date::get_year() const
{
    return std::stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const
{
    return std::stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const
{
    return std::stoi(yyyymmdd.substr(6, 2));
}

bool Date::is_valid() const
{
    if (std::stoi(yyyymmdd.substr(0, 4)) ==  0)
    {
        return false;
    }

    return true;
}
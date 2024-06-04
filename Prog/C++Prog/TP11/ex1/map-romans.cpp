#include <string>
#include <utility>
#include <vector>
#include <iostream>

unsigned roman_to_arab(const std::string &roman)
{
    std::vector<std::pair<char, unsigned>> roman_to_int = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    unsigned sum = 0;
    std::vector<unsigned> arab;

    for (auto itr = roman.rbegin(); itr != roman.rend(); itr++)
    {
        for (std::pair<char, unsigned> i : roman_to_int)
        {
            if (i.first == *itr)
            {
                arab.push_back(i.second);
            }
        }
    }

    for (auto itr = arab.begin(); itr != arab.end(); itr++)
    {
        if (itr != arab.begin())
        {
            if (*itr < *(itr - 1))
            {
                sum -= *itr;
            }
            else
            {
                sum += *itr;
            }
            
            continue;
        }

        sum += *itr;
    }

    return sum;
}
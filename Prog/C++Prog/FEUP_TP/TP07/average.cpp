#include <fstream>
#include <string>
#include <cctype>
#include <iostream>

double average(const std::string fname)
{
    std::ifstream in(fname);
    double x, sum = 0;
    int count = 0;

    while (!in.eof())
    {
        if (in >> x)
        {
            sum += x;
            count++;
            continue;
        }

        in.clear();
        in.ignore(1);
    }

    return sum / count;
}


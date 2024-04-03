#include "show_file.h"
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

void calc_medians(const std::string &input_fname, const std::string &output_fname)
{
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    std::string line;

    while (getline(in, line))
    {
        if (line[0] == '#')
        {
            continue;
        }

        std::istringstream iss(line);
        int count = 0;
        std::string str;
        std::string str_start;    //string at the start of a series
        std::vector<double> list;
        double median;

        while (iss >> str)
        {
            if (count++ == 0)
            {
                str_start = str;
                continue;
            }

            list.push_back(stod(str));
        }

        std::sort(list.begin(), list.end());    //sorts the vector

        if (list.size() % 2 != 0)
        {
            median = list[list.size()/2];
        }

        else
        {
            median = 0.5 * (list[list.size() / 2 - 1] + list[list.size() / 2]);
        }

        out << str_start << " " << std::fixed << std::setprecision(1) << median << '\n';
    }
}
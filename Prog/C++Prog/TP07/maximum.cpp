#include "show_file.h"
#include <fstream>
#include <string>
#include <iomanip>

void maximum(const std::string &input_fname, const std::string &output_fname)
{
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    double x, max = -1000;
    int count = 0;

    while (in >> x)
    {
        out << std::fixed << std::setprecision(3) << x << '\n'; // ! std::fixed forces the precision to be exactly 3

        if (x > max)
        {
            max = x;
        }

        count++;
    }

    out << "count=" << count << "/max=" << std::fixed << std::setprecision(3) << max << '\n';
}



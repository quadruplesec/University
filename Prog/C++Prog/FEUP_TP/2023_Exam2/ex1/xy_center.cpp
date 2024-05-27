#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "show_file.h"

void xy_center(const std::string &input_fname, const std::string &output_fname)
{
    std::ifstream ifs(input_fname);
    std::ofstream ofs(output_fname);
    double x_center = 0, y_center = 0;
    int count = 0;

    while(!ifs.eof())
    {
        std::string line;
        getline(ifs, line);
        std::istringstream iss(line);
        double x, y;

        while(iss >> x)
        {
            iss >> y;
            count++;
            x_center += x;
            y_center += y;

            ofs << std::fixed << std::setprecision(1) << '(' << x << ',' << y << ')' << '\n';
        }
    }

    ofs << std::fixed << std::setprecision(1) << '(' << x_center / count << ',' << y_center / count << ')' << '\n';
}

int main(void)
{
    //Test 1 (passed)
    xy_center("xy-1.txt", "xy-1_out.txt");
    show_file("xy-1.txt"); show_file("xy-1_out.txt");
    std::cout << '\n';

    //Test 2 (passed)
    xy_center("xy-2.txt", "xy-2_out.txt");
    show_file("xy-2.txt"); show_file("xy-2_out.txt");
    std::cout << '\n';

    //Test 3 (passed)
    xy_center("xy-3.txt", "xy-3_out.txt");
    show_file("xy-3.txt"); show_file("xy-3_out.txt");
    std::cout << '\n';

    //Test 4 (passed)
    xy_center("xy-4.txt", "xy-4_out.txt");
    show_file("xy-4.txt"); show_file("xy-4_out.txt");
    std::cout << '\n';

    return 0;
}
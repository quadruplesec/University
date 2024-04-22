#include "print.h"
#include <string>
#include <fstream>
#include <cctype>

std::string str_toupper(const std::string str)
{
    std::string ret_str;

    for (char c : str)
    {
        ret_str += std::toupper(c);
    }

    return ret_str;
}

void normalise(const std::string &input_fname, const std::string &output_fname)
{
    /*    
    >Lines that contain only space characters should not be written to the output file;
    >Leading and trailing spaces in a line should be erased;
    >All characters should be uppercased.
    */
    std::ifstream in(input_fname);
    std::ofstream out(output_fname);
    std::string line;

    while (getline(in, line))
    {
        if (line.find_first_not_of(' ') == std::string::npos) //checks if the line only has spaces
        {
            continue;
        }

        line = str_toupper(line);                       //makes the string all caps (https://www.youtube.com/watch?v=gItqDMZMhko)
        line.erase(0, line.find_first_not_of(' '));     //deletes all leading spaces
        line.erase(line.find_last_not_of(' ') + 1);     //deletes all trailing spaces
        
        out << line << '\n';
    }
}
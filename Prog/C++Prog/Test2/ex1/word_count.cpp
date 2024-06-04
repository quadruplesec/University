#include <fstream>
#include <string>
#include <sstream>
#include "show_file.h"

void word_count(const std::string& input_fname, const std::string& output_fname)
{
    std::ifstream ifs(input_fname);
    std::ofstream ofs(output_fname);
    std::string line;

    while(getline(ifs, line))
    {
        std::istringstream iss(line);
        int word_count = 0;
        std::string word;

        while (iss >> word) word_count++;

        ofs << word_count << '\n';
    }
}
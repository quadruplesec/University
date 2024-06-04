#include "wc.h"
#include <fstream>
#include <string>

wcresult wc(const std::string &filename)
{
    std::ifstream in(filename);
    std::string line;
    wcresult result {0, 0, 0};

    while (getline(in, line))   //from in, get line
    {
        std::string str;
        std::istringstream iss(line);
        result.lines++; //if it got a line, I can automatically increase the line count
        result.bytes += line.size() + 1; //to account for newline

        while (iss >> str)  //parses the words in the line
        {
            result.words++; //if its still parsing words, there's a word to add to the count
        }
    }
    return result;
}

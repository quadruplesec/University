#include <fstream>
#include <string>
#include <cctype>

std::string str_tolower(const std::string str)
{
    std::string ret_str;

    for (size_t i = 0; i < str.size(); i++)
    {
        ret_str += tolower(str[i]);
    }

    return ret_str;
}

int count(const std::string &fname, const std::string &word)
{
    std::ifstream in(fname);
    int count = 0;
    std::string str, word_lower = str_tolower(word);

    while (in >> str)
    {
        str = str_tolower(str);
        if (str == word_lower)
        {
            count++;
        }
    }

    return count;
}
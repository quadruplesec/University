#include <map>
#include <string>

void replace(const std::map<char, char>& r, std::string& s)
{
    for (char &c : s)
    {
        // checks if the key exists in the map
        if (r.find(c) != r.end())
        {
            c = r.at(c);
        }
    }
}
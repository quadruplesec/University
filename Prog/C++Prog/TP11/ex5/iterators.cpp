#include <string>
#include <sstream>
#include <vector>
#include <list>

template <typename Itr> 
std::string to_string(Itr start, Itr end)
{
    std::ostringstream oss;

    oss << "[ ";

    for (; start != end; start++)
    {
        oss << (*start) << " ";    
    }

    oss << ']';
    return oss.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b)
{
    int replacements = 0;
    for ( ; start != end; start++)
    {
        if (*start == a)
        {
            *start = b;
            replacements++;
        }
    }

    return replacements;
}
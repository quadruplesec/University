#include <string>
#include <map>
#include <iostream>
#include <sstream>

// Function that was provided to print the map
void show_map(const std::map<std::string, size_t>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}

void string_to_lower(std::string &str)
{
    for (char &c : str)
    {
        c = tolower(c);
    }
}

void count_words(const std::string& str, std::map<std::string, size_t>& count)
{
    std::istringstream iss(str);
    std::string word;

    while(iss >> word)
    {
        string_to_lower(word);
        
        if (count.find(word) == count.end())
        {
            count[word] = 1;
        }
        else
        {
            count[word]++;
        }
    }
}
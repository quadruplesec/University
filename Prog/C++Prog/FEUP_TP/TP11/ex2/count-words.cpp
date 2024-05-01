#include <string>
#include <vector>
#include <utility>
#include <sstream>
#include <iostream>
#include <algorithm>

bool sorting_function(const std::pair<std::string, size_t> &p1, const std::pair<std::string, size_t> &p2)
{
    if (p1.first < p2.first)
    {
        return true;
    }

    return false;
}

void count_words(const std::string &str, std::vector<std::pair<std::string, size_t>> &count)
{
    std::istringstream iss(str);
    std::string word;

    while(!iss.eof())
    {
        iss >> word;
        
        for (char &c : word)
        {
            c = tolower(c);
        }

        bool in_vector = false;
        for (std::pair<std::string, size_t> &p : count)
        {
            if (p.first == word)
            {
                in_vector = true;
                ++p.second;
                break;
            }
        }

        if (!in_vector)
        {
            std::pair<std::string, size_t> new_pair (word, 1);
            count.push_back(new_pair);
        }
    }

    std::sort(count.begin(), count.end(), sorting_function);
}

void show_vector(const std::vector<std::pair<std::string, size_t>>& count) {
  std::cout << "[ ";
  for (const auto& e : count) {
    std::cout << e.first << ":" << e.second << ' ';
  }
  std::cout << "]\n";
}
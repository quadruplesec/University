#include "Book.h"
#include <set>
#include <string>

void Book::build_index(const std::set<std::string>& words)
{
    for (std::string str : words)
    {
        std::set<size_t> page_set;

        for (size_t page = 0; page < book_.size(); page++)
        {
            for (size_t i = 0; i < book_[page].get_num_lines(); i++)
            {
                std::string line = book_[page].get_line(i);
                if (line.find(str) != std::string::npos)
                {
                    page_set.insert(page + 1);
                    break;
                }
            }
        }

        if (page_set.size() != 0)
        {
            index_.insert({str, page_set});
        }
    }
}
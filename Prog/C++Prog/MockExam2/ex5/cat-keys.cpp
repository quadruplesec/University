#include <list>
#include <map>
#include <string>
#include <climits>

std::string cat_keys(std::list<std::map<std::string, unsigned>> lst)
{
    unsigned min = UINT_MAX;
    std::string return_string;

    for (auto itr = lst.begin(); itr != lst.end(); itr++)
    {
        std::string cat_key;
        unsigned local_min = UINT_MAX;

        for (auto map_itr = itr->begin(); map_itr != itr->end(); map_itr++)
        {
            cat_key += map_itr->first;

            if (map_itr->second < local_min)
            {
                local_min = map_itr->second;
            }
        }

        if (local_min < min)
        {
            return_string = cat_key;
            min = local_min;
        }
    }

    return return_string;
}
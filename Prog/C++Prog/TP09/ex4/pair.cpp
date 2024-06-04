#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

template <typename T, typename F>
class Pair
{
    public:
        Pair(T first, F second)
        {
            first_ = first;
            second_ = second;
        }

        T get_first() const
        {
            return first_;
        }

        F get_second() const
        {
            return second_;
        }

        void show() const
        {
            std::cout << "{" << first_ << "," << second_ << "}";
        }

    private:
        T first_;
        F second_;
};

bool first_sort(Pair<std::string, int> p1, Pair<std::string, int> p2)
{
    if (p1.get_first() < p2.get_first())
    {
        return true;
    }

    return false;
}

bool second_sort(Pair<std::string, int> p1, Pair<std::string, int> p2)
{
    if (p1.get_second() < p2.get_second())
    {
        return true;
    }

    return false;
}

void sort_by_first(std::vector<Pair<std::string, int>> &vec)
{
    std::sort(vec.begin(), vec.end(), first_sort);
}

void sort_by_second(std::vector<Pair<std::string, int>> &vec)
{
    std::sort(vec.begin(), vec.end(), second_sort);
}

void show(std::vector<Pair<std::string, int>> vec)
{
    std::cout << "{";

    for (Pair<std::string, int> &p : vec)
    {
        p.show();
    }

    std::cout << "}\n";
}
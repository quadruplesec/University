// ! INCOMPLETE, giving some SEGV. Not sure I'll do this one

#include <vector>
#include <iostream>
#include <algorithm>

void show_vector(const std::vector<std::vector<int>> &v) {
    using namespace std;
    cout << "{";
    for (const auto& line : v) {
        cout << "{ ";
        for (const auto& elem : line)
        cout << elem << ' ';
        cout << "}";
    }
    cout << "}";
}

int filter_point(std::vector<std::vector<int>> &v, size_t x, size_t y, size_t n)
{
    std::vector<int> neighbourhood;

    for (size_t row = x - n/2; row <= x + n/2; row++)
    {
        if (row < 0 || row >= v.size()) continue;

        for (size_t collumn = y - n/2; collumn <= y + n/2; collumn++)
        {
            if (collumn < 0 || collumn >= v.size()) continue;

            std::cout << v[row][collumn] << '\n';
            neighbourhood.push_back(v[row][collumn]);
        }
    }

    int max = neighbourhood[0];
    for (int &i : neighbourhood)
    {
        if (i > max)
        {
            max = i;
        }
    }

    return max;
}

bool max_filter(std::vector<std::vector<int>> &v, int n)
{
    if (n % 2 == 0) return false;
    if (v.size() < (size_t) n) return false;
    for (std::vector<int> &t : v)
    {
        if (t.size() < (size_t) n) return false;
    }


    for (size_t row = 0; row < v.size(); row++)
    {
        for (size_t collumn = 0; collumn < v.size(); collumn++)
        {
            v[row][collumn] = filter_point(v, row, collumn, n);
        }
    }

    return true;
}

int main()
{ using namespace std;
    vector<vector<int>> v = { {1,2,3}, {4,5,6}, {7,8,9} };
  bool b = max_filter(v, 3); cout << boolalpha << b;
  show_vector(v); cout << endl; 
  return 0;}
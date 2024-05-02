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

void filter_surrounding(std::vector<std::vector<int>> &maxed_matrix, std::vector<std::vector<int>> &v, int row, int collumn, int n)
{
    std::vector<int> surround;
    for (int r = row - n/2; r <= row + n/2; r++)
    {
        if (r < 0 || r > (int) v.size() - 1) continue;
        for (int c = collumn - n/2; c <= collumn + n/2; c++)
        {
            if (c < 0 || c > (int) v[0].size() - 1) continue;
            surround.push_back(v[r][c]);
        }
    }

    int max = surround[0];
    for (int i : surround)
    {
        if (i > max)
        {
            max = i;
        }
    }
    maxed_matrix[row][collumn] = max;
}

bool max_filter(std::vector<std::vector<int>> &v, int n)
{
    // Validity check
    if (n % 2 == 0) return false;
    if (v.size() < (size_t) n) return false;
    for (std::vector<int> &t : v)
    {
        if (t.size() < (size_t) n) return false;
    }

    std::vector<std::vector<int>> maxed_matrix = v;

    // Matrix traverser
    for (size_t row = 0; row < v.size(); row++)
    {
        for (size_t collumn = 0; collumn < v[0].size(); collumn++)
        {
            filter_surrounding(maxed_matrix, v, row, collumn, n);
        }
    }
    v = maxed_matrix;
    return true;
}
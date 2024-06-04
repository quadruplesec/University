#include <string>
#include <map>
#include <list>
#include <iostream>

std::string student_lowest_avg(std::map<std::string, std::list<int>> m)
{
    std::string lowest;
    double min_avg = 20.0;

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        double avg = 0;
        int n = 0;

        for (int &grade : itr->second)
        {
            n++;
            avg += grade;
        }

        avg /= n;
        if (avg < min_avg)
        {
            lowest = itr->first;
            min_avg = avg;
        }
    }

    return lowest;
}

int main(void)
{
    using namespace std;

    //Test 1 (passed)
    map<string, list<int>> m1 = {{"Jerry", {10, 20, 15}}};
    cout << student_lowest_avg(m1) << '\n';

    //Test 2 (passed)
    map<string, list<int>> m2 = {{"Newman", {15, 18, 14, 16}}, {"Elaine", {18, 12, 19}}};
    cout << student_lowest_avg(m2) << '\n';

    //Test 3 (passed)
    map<string, list<int>> m3 = {{"Tim", {10, 10}}, {"Bania", {11, 12, 14}}, {"Frank", {15, 12, 13}}};
    cout << student_lowest_avg(m3) << '\n';

    //Test 4 (passed)
    map<string, list<int>> m4 = {{"Kramer", {0, 11}}, {"Costanza", {8, 12}}};
    cout << student_lowest_avg(m4) << '\n';

    //Test 5 (passed)
    map<string, list<int>> m5 = {{"Costanza", {10, 15}}, {"Frank", {10, 14}}};
    cout << student_lowest_avg(m5) << '\n';

    return 0;
}
#include <map>
#include <list>
#include <string>
#include <iostream>
#include <iomanip>

void print_grades(const std::map<std::string, std::list<int>> &grades)
{
    std::map<double, std::string> map_by_average;

    for (auto itr = grades.begin(); itr != grades.end(); itr++)
    {
        double grade_average = 0;
        int n_grades = 0;

        for (auto i : itr->second)
        {
            n_grades++;
            grade_average += i;
        }

        map_by_average[grade_average/n_grades] = itr->first;
    }

    double overall_average = 0;
    int n_students = map_by_average.size();

    for (auto itr = map_by_average.rbegin(); itr != map_by_average.rend(); itr++)
    {
        std::cout << itr->second << ' ' << std::fixed << std::setprecision(2) << itr->first << '\n';
        overall_average += itr->first;
    }

    std::cout << overall_average / n_students;
}
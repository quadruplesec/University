#include <string>
#include <map>
#include <list>

std::string student_highest_avg(std::map<std::string, std::list<int>> m)
{
    std::string highest_student;
    float max_avg = 0;

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {
        float avg = 0;
        int subjects = 0;

        for (float i : itr->second)
        {
            avg += i;
            subjects++;
        }

        avg = avg / subjects;

        if (avg > max_avg)
        {
            highest_student = itr->first;
            max_avg = avg;
        }
    }

    return highest_student;
} 
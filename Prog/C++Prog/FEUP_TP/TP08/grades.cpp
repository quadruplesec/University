#include "Student.h"
#include <string>
#include <vector>

Student::Student(const std::string& id)
{
    id_ = id;
}

std::string Student::get_id(void) const
{
    return id_;
}

void Student::add(const course &c)
{
    courses_.push_back(c);
}

double Student::avg(void) const
{
    double sum_1, sum_2;

    for (course c : courses_)
    {
        sum_1 += c.credits * c.grade;
        sum_2 += c.credits;
    }

    return sum_1 / sum_2;
}
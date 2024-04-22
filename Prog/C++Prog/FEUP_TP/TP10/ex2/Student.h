#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
    public:
        Student(int id, const std::string &name, const std::string &course);
        const std::string& course() const;
        std::string to_string() const override;

    private:
        std::string course_;
};

Student::Student(int id, const std::string &name, const std::string &course) : Person(id, name), course_(course) {}

const std::string& Student::course() const
{
    return course_;
}

std::string Student::to_string() const
{
    ostringstream out;
    out << Student::id() << "/" << Student::name() << "/" << course_;
    return out.str();
}

#endif
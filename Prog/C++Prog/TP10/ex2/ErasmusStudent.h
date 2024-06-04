#ifndef ERASMUSSTUDENT_H
#define ERASMUSSTUDENT_H

#include "Student.h"

class ErasmusStudent : public Student
{
    public:
        ErasmusStudent(int id, const std::string& name, const std::string& course, const std::string& country);
        const std::string& country() const;
        std::string to_string() const override;

    private:
        std::string country_;
};

ErasmusStudent::ErasmusStudent(int id, const std::string& name, const std::string& course, const std::string& country) :
    Student(id, name, course), country_(country) {}

const std::string& ErasmusStudent::country() const
{
    return country_;
}

std::string ErasmusStudent::to_string() const
{
    ostringstream out;
    out << ErasmusStudent::id() << "/" << ErasmusStudent::name() << "/" << ErasmusStudent::course()
        << "/" << country_;
    return out.str(); 
}

#endif
#include <string>
#include <iostream>

class Person
{
    public:
        Person(const std::string &name = "", int age = 0) {name_ = name; age_ = age;}
        void show() {std::cout << name_ << "-" << age_ << std::endl;}

    private:
        std::string name_;
        static int age_;
};

int main()
{
    Person p1;
    p1.show();

    return 0;
}
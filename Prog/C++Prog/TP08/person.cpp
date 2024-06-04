#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iostream>

class Person {
public:
  Person(const std::string& name, const std::string& address, const std::string& phone);
  std::string get_name() const;
  std::string get_address() const;
  std::string get_phone() const;
private:
  std::string name_;    // Name
  std::string address_; // Address
  std::string phone_;   // Phone
};

Person::Person(const std::string& name, const std::string& address, const std::string& phone)
{
    name_ = name;
    address_ = address;
    phone_ = phone;
}

std::string Person::get_name() const
{
    return name_;
}

std::string Person::get_address() const
{
    return address_;
}

std::string Person::get_phone() const
{
    return phone_;
}

void read_persons_data(const std::string &file_name, std::vector<Person> &persons)
{
    std::ifstream in(file_name);
    std::string line;

    while(!in.eof())
    {
        getline(in, line);
        std::string name = line;
        getline(in, line);
        std::string address = line;
        getline(in, line);
        std::string phone = line;
        
        if (in.eof())
        {
            break;      //function was adding an empty object to the vector without this check
        }
        
        Person obj(name, address, phone);
        persons.push_back(obj);
    }   
}

bool person_greater_than(const Person &Rika, const Person &Satoko)
{
    return Rika.get_name() < Satoko.get_name();
}

void sort_persons_by_name(std::vector<Person>& persons)
{
    std::sort(persons.begin(), persons.end(), person_greater_than);
}

void show_persons_data(const std::vector<Person>& persons)
{
    std::cout << "[\n";
    for (const Person &p : persons)
    {
        std::cout << "  "  << p.get_name() 
                << " : " << p.get_address() 
                << " : " << p.get_phone() << '\n';
    }
    std::cout << "]\n";
}
#include "Date.h"
#include "Person.h"
#include <vector>
#include <iostream>

void born_before(const std::vector<Person> &persons, const Date& date)
{
    date.show();
    std::cout << ": ";
    for (const Person &p : persons)
    {
        if (!date.is_before(p.get_birth_date()))
        {
            std::cout << p.get_name() << "-";
            p.get_birth_date().show();
            std::cout << " ";
        }
    }    
}

#include "Hanoi.h"

// Tower Implementation

int Tower::top() const
{
    if (disks_.empty())
    {
        return 0;
    }

    return disks_.back();
}

void Tower::add(int disk)
{
    disks_.push_back(disk);
}

void Tower::remove()
{
    if (!disks_.empty())
    {
        disks_.pop_back();
    }
}

string Tower::str() const
{
    std::ostringstream oss;
    oss << "[ ";

    for (auto d : disks_)
    {
        oss << d << ' '; 
    }

    oss << "]";
    return oss.str();
}


//Hanoi Implementation

void Hanoi::move(const vector<disk_move>& dmoves)
{
    for (auto itr = dmoves.begin(); itr != dmoves.end(); itr++)
    {
        if ((towers_[itr->to].top() == 0 || towers_[itr->from].top() < towers_[itr->to].top()))
        {
            if (towers_[itr->from].top() != 0)
            {
                towers_[itr->to].add(towers_[itr->from].top());
                towers_[itr->from].remove();
            }
        }
    }
}
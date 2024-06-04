#include "HanoiPuzzle.h"

int Tower::top() const
{
    if (disks_.empty()) return 0;
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

ostream& operator<<(ostream& os, const Tower& t)
{
    os << "[ ";
    for (int i : t.get_disks())
    {
        os << i << ' ';
    }
    os << ']';

    return os;
}

void HanoiPuzzle::move(const vector<disk_move>& dmoves)
{
    for (disk_move dm : dmoves)
    {
        // If disk at the top of destination tower is larger than the one being stacked on it, the move is valid
        if ((towers_[dm.second].top() > towers_[dm.first].top() || towers_[dm.second].top() == 0) && towers_[dm.first].top() != 0)
        {
            towers_[dm.second].add(towers_[dm.first].top());
            towers_[dm.first].remove();
        }
    }
}

//Tests
int main(void)
{
    //Test 1 (passed)
    Tower t;        cout << "a. " << t.top() << ' ' << t << endl;
    t.add(5);       cout << "b. " << t.top() << ' ' << t << endl;
    t.add(4);       cout << "c. " << t.top() << ' ' << t << endl;
    t.remove();     cout << "d. " << t.top() << ' ' << t << endl;
    t.add(3);       cout << "e. " << t.top() << ' ' << t << endl;
    t.add(2);       cout << "f. " << t.top() << ' ' << t << endl;
    t.remove();     cout << "g. " << t.top() << ' ' << t << endl;
    t.remove();     cout << "h. " << t.top() << ' ' << t << endl;
    t.remove();     cout << "i. " << t.top() << ' ' << t << endl;
    t.remove();     cout << "j. " << t.top() << ' ' << t << endl;
    t.add(1);       cout << "k. " << t.top() << ' ' << t << endl;
    t.remove();     cout << "l. " << t.top() << ' ' << t << endl;
    cout << endl;

    //Test 2 (passed)
    HanoiPuzzle h(5);
    cout << h << endl;
    cout << endl;

    //Test 3 (passed)
    HanoiPuzzle i(3);
    i.move({ {0, 2}, {0, 1}, {2, 1}, {0, 2} });
    cout << i << endl;
    cout << endl;

    //Test 4 (not passed)
    HanoiPuzzle j(3);
    j.move({ {0, 2}, {1, 2}, {0, 2}, {0, 1}, {2, 1}, {0, 2}, {1, 1} });
    cout << j << endl;
    cout << endl;

    //Test 5 (passed)
    HanoiPuzzle k(2);
    k.move({ {0, 1}, {0, 2}, {1, 2} });
    cout << k << endl;
    cout << endl;

    //Test 6 (passed)
    HanoiPuzzle l(3);
    l.move({ {0, 2}, {0, 1}, {2, 1}, {0, 2}, {1, 0}, {1, 2}, {0, 2} });
    cout << l << endl;
    cout << endl;

    //Test 7 (passed)
    HanoiPuzzle m(5);
    m.move({ {2, 0}, {2, 1}, {0, 2}, {0, 0}, {0, 1}, {2, 1}, {0, 2}, {1, 0}, {1, 2}, {0, 2}, {1, 2}, {2, 1} });
    cout << m << endl;
    cout << endl;

    //Test 8 (passed)
    HanoiPuzzle n(10);
    n.move({ {2, 0}, {2, 1}, {0, 2}, {0, 0}, {0, 1}, {2, 1}, {0, 2}, {1, 0}, {1, 2}, {0, 2}, {1, 2}, {2, 0} });
    cout << n << endl;
}
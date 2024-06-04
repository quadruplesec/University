#include "Stack.h"

template <typename T>
Stack<T>::Stack()
{
    elements.clear();
}

template <typename T>
size_t Stack<T>::size() const
{
    return elements.size();
}

template <typename T>
bool Stack<T>::peek(T &elem) const
{
    if (elements.empty())
    {
        return false;
    }

    elem = elements.back();
    return true;
}

template <typename T>
bool Stack<T>::pop(T &elem)
{
    if (elements.empty())
    {
        return false;
    }

    elem = elements.back();
    elements.pop_back();
    return true;
}

template <typename T>
void Stack<T>::push(const T &elem)
{
    elements.push_back(elem);
}

int main()
{
    using namespace std;

    Stack<int> s;
    const Stack<int>& r = s;
    int v = -1;
    cout << r.size()  << ' ' << boolalpha
       << r.peek(v) << ' ' << v << ' '
       << s.pop(v)  << ' ' << v << ' '
       << s.size() << '\n';

    return 0;
}
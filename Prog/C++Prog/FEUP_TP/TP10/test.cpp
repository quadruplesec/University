#include <vector>
#include <iostream>

using namespace std;

class C1
{
    public:
        C1(int x) : x_(x) {}
        virtual void f1() const {cout << "class C1\n";}
    private:
        int x_;
};

class C2 : public C1
{
    public:
        C2(int x, int y) : C1(x), y_(y) {}
        virtual void f1() const override {cout << "class C2\n";}
        void f2() const {cout << "yo momma\n";}
    private:
        int y_;
};



int main()
{
    C2 b(1, 2);
    C1* pa = &b;
    pa->f2();
    return 0;
}
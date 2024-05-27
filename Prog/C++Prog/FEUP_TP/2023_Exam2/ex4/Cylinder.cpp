#include "Solid.h"

class Cylinder : public Solid
{
    public:
        Cylinder(const point &c, const double &radius, const double &height) : 
            Solid(c), radius_(radius), height_(height) {}
        double radius() const {return radius_;}
        double height() const {return height_;}
        double area() const {return 2.0 * M_PI * radius_ * (radius_ + height_);}

   private:
        double radius_;
        double height_;
};

//Tests
int main(void)
{   
    //Test 1 (passed)
    const Cylinder c({0,0,0}, 1, 1);
    cout << c.center() << ' ' << c.radius() << ' ' << c.height() << ' ' << c.area() << '\n';

    //Test 2 (passed)
    const Cylinder c1({0.1, 2.3, 4.5}, 1.2, 3.4);
    cout << c1.center() << ' ' << c1.radius() << ' ' << c1.height() << ' ' << c1.area() << '\n';

    //Test 3 (passed)
    const Solid &s = Cylinder({-1.2, -3.4, -5.6}, 1.2, 0.34);
    cout << s.center() << ' ' << s.area() << '\n';

    //Test 4 (passed)
    const Solid &s1 = Cylinder({12.3, 34.5, 56.7}, 12.3, 0.51);
    cout << s1.center() << ' ' << s1.area() << '\n';

    return 0;
}
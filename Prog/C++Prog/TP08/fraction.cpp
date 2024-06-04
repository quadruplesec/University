#include <iostream>
#include <cmath>

class Fraction
{
    public:
        Fraction();                         //default constructor
        Fraction(int num, int den);         //custom constructor
        void reduce();                      //makes the function have irreducible form
        int numerator();                    //numerator accessor
        int denominator();                  //denominator accessor
        int gcd(int a, int b);              //greatest common divisor
        void normalise();                   //normalises fraction
        void write() const;                 //prints out the fraction
        Fraction sum(const Fraction& right);     
        Fraction sub(const Fraction& right);
        Fraction mul(const Fraction& right);
        Fraction div(const Fraction& right);


    private:
        int num;
        int den;
};

Fraction::Fraction()
{
    num = 0;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    num = n;
    den = d;
    normalise();
}

int Fraction::numerator()
{
    return num;
}

int Fraction::denominator()
{
    return den;
}

int Fraction::gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    
    return a;
}

void Fraction::normalise()
{
    int g = gcd(num, den);
    num /= g;
    den /= g;

    if (den < 0)
    {
        num = -num;
        den = -den;
    }
}

void Fraction::write() const
{
    std::cout << num << '/' << den;
}

Fraction Fraction::sum(const Fraction& right)
{
    int temp_num = num * right.den + right.num * den;
    int temp_den = den * right.den;

    Fraction ret_frac (temp_num, temp_den);
    ret_frac.normalise();
    return ret_frac;
}   

Fraction Fraction::sub(const Fraction& right)
{
    int temp_num = num * right.den - right.num * den;
    int temp_den = den * right.den;

    Fraction ret_frac (temp_num, temp_den);
    ret_frac.normalise();
    return ret_frac;
}

Fraction Fraction::mul(const Fraction& right)
{
    int temp_num = num * right.num;
    int temp_den = den * right.den;

    Fraction ret_frac (temp_num, temp_den);
    ret_frac.normalise();
    return ret_frac;
}

Fraction Fraction::div(const Fraction& right)
{
    int temp_num = num * right.den;
    int temp_den = den * right.num;

    Fraction ret_frac (temp_num, temp_den);
    ret_frac.normalise();
    return ret_frac;  
}
#ifndef COLOUR_H
#define COLOUR_H

class Color
{
    public:
        Color(unsigned char red, unsigned char green, unsigned char blue);  //RGB argument constructor
        Color(const Color &c);                                              //copy constructor
        unsigned char red() const;                                          //red accessor
        unsigned char green() const;                                        //green accessor
        unsigned char blue() const;                                         //blue accessor
        bool equal_to(const Color &other) const;                            //check if colours are equal
        void invert();                                                      //invert RGB elements
        static const Color RED, GREEN, BLUE, BLACK, WHITE;

    private:
        unsigned char red_, blue_, green_;
};

#endif
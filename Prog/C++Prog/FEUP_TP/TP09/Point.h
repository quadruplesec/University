#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point();                    //default constructor (x = 0, y = 0)
        Point(int x, int y);        //int constructor
        void show() const;          //cout the coordinates (no endline)

    private:
        int x_, y_;
};

#endif

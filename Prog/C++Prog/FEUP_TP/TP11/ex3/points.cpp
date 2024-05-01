#include "Point.h"

Point::Point() : x_(0), y_(0) { }

Point::Point(int x, int y) : x_(x), y_(y) { }

Point::Point(const Point& p) : x_(p.x_), y_(p.y_) { }

int Point::get_x() const
{
      return x_;
}

int Point::get_y() const
{
      return y_;
}

Point& Point::operator=(const Point& p)
{
      x_ = p.x_;
      y_ = p.y_;
      return *this;
}

Point Point::operator+(const Point& p) const
{
      Point c;
      c.x_ = x_ + p.x_;
      c.y_ = y_ + p.y_;
      return c;
}

Point& Point::operator+=(const Point& p)
{
      x_ += p.x_;
      y_ += p.y_;
      return *this;
}

Point Point::operator*(int v) const
{
      Point p;
      p.x_ = x_ * v;
      p.y_ = y_ * v;
      return p;
}


Point operator*(int x, const Point& p)
{
      int px = x * p.get_x();
      int py = x * p.get_y();
      return Point(px, py);
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
      os << '(' << p.get_x() << ',' << p.get_y() << ')';
      return os;
}
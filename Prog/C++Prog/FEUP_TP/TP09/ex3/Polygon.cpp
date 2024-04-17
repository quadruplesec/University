#include "Polygon.h"

Polygon::Polygon()
{
    vertices.clear();
}

Polygon::Polygon(std::vector<Point> p)
{
    vertices = p;
}

bool Polygon::get_vertex(int index, Point &p) const
{
    if (index < 1 || index > (int) vertices.size())
    {
        return false;
    }

    p = vertices[index - 1];
    return true;
}

void Polygon::add_vertex(int index, Point p)
{
    if (index < 1 || index > (int) vertices.size() + 1)
    {
        return;
    }

    vertices.insert(vertices.begin() + (index - 1), p);
}

void Polygon::show()
{
    std::cout << "{";

    for (Point &p : vertices)
    {
        p.show();
    }

    std::cout << "}";
}

double Polygon::perimeter() const
{
    double sum = 0;

    for (size_t i = 0; i < vertices.size(); i++)
    {
        if (i == vertices.size() - 1)
        {
            sum += vertices[i].distance(vertices[0]);
            break;
        }

        sum += vertices[i].distance(vertices[i+1]);
    }

    return sum;
}
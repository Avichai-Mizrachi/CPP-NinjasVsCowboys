#include "Point.hpp"

namespace ariel
{
    Point ::Point() : x(0), y(0) {}
    Point::Point(double x, double y) : x(x), y(y) {}
    double Point::distance(Point other)
    {
        double distance = sqrt(pow((this->getX()) - (other.getX()), 2) + pow((this->getY()) - (other.getY()), 2));
        return distance;
    }
    double Point::getX()
    {
        return this->x;
    }
    double Point::getY()
    {
        return this->y;
    }
    void Point::setX(double x)
    {
        this->x = x;
    }
    void Point::setY(double y)
    {
        this->y = y;
    }
    void Point::print()
    {
        cout << "(" << this->getX() << " , " << this->getY() << " )\n"
             << endl;
    }
    Point Point::moveTowards(Point &original, Point &target, double distance)
    {
        return Point(0, 0);
    }
}
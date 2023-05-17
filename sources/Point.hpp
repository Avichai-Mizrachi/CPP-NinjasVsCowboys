#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

namespace ariel{
    class Point{

        private:
            double y;
            double x;

        public:
            Point();
            Point(double x, double y);
            double distance(Point other);
            double getX();
            double getY();
            void setX(double x);
            void setY(double y);
            void print();
            Point moveTowards(Point& original,Point& target,double distance);
    };
}
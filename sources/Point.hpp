#pragma once
#include <iostream>
using namespace std; 

namespace ariel{

    class Point{
        double x_;
        double y_;

        public:
            Point(double x1, double y1);
            double distance(const Point& other) const;
            void print() const;
            Point moveTowards(Point& source, Point& dest, double dist);
};
}
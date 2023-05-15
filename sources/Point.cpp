#include "Point.hpp"
using namespace ariel;

Point :: Point(double x1, double y1){
    x_ = x1;
    y_ = y1;
}

double Point :: distance(const Point& other) const{
    return 0;
}

void Point :: print() const{
    return;
}

Point Point :: moveTowards(Point& source, Point& dest, double dist){
    return *this;
}

#include  "Triangle.h"
#include  <math.h>

double Triangle::sideLength(double ax, double ay, double bx, double by) const {
    return std::sqrt(std::pow(bx - ax, 2) + std::pow(by - ay, 2));
}

Triangle::Triangle() : x1(0), y1(0), x2(1), y2(0), x3(0), y3(1) {}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}

Triangle::Triangle(const Triangle &other)
    : x1(other.x1), y1(other.y1), x2(other.x2), y2(other.y2), x3(other.x3), y3(other.y3) {}

Triangle::~Triangle() {}

void Triangle::getCoordinates(double &outX1, double &outY1, double &outX2, double &outY2, double &outX3, double &outY3)  {
    outX1 = x1; outY1 = y1;
    outX2 = x2; outY2 = y2;
    outX3 = x3; outY3 = y3;
}

double Triangle::getPerimeter() const {
    return sideLength(x1, y1, x2, y2) + sideLength(x2, y2, x3, y3) + sideLength(x3, y3, x1, y1);
}

double Triangle::getArea() const {
    return std::abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}
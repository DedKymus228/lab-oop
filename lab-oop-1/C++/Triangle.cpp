#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3) {
    x1 = _x1; y1 = _y1;
    x2 = _x2; y2 = _y2;
    x3 = _x3; y3 = _y3;
}

double Triangle::getPerimeter() {

    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    return a + b + c;
}

double Triangle::getArea() {

    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}
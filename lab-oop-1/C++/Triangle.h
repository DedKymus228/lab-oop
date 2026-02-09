#pragma once

class Triangle {
private:
    double x1, y1, x2, y2, x3, y3;

public:

    Triangle(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3);


    double getPerimeter();
    double getArea();
};
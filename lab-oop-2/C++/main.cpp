#include <iostream>

#include "MyClassLib/Triangle.h"

int main() {
    double x1, y1, x2, y2, x3, y3;

    Triangle exampleTriangle;

    Triangle exampleTriangle1 (10, 25, 5, 10, 25, 5);

    Triangle exampleTriangle2 (Triangle& exampleTriangle);

    exampleTriangle1.getCoordinates (x1, y1, x2, y2, x3, y3);

    std::cout <<"Point 1: (" << x1 << ", " << y1 << ")" << std::endl;
    std::cout <<"Point 2: (" << x2 << ", " << y2 << ")" << std::endl;
    std::cout <<"Point 3: (" << x3 << ", " << y3 << ")" << std::endl;
    std::cout <<"Area: "<< exampleTriangle1.getArea() << std::endl;
    std::cout <<"Perimeter: " << exampleTriangle1.getPerimeter() << std::endl;

    return 0;
}

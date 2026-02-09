#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter x1 y1 x2 y2 x3 y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    Triangle tri(x1, y1, x2, y2, x3, y3);

    cout << "Perimeter: " << tri.getPerimeter() << endl;
    cout << "Area: " << tri.getArea() << endl;

    return 0;
}
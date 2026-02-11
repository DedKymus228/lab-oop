#ifndef LAB_OOP_2_TRIANGLE_H
#define LAB_OOP_2_TRIANGLE_H


class Triangle {
    private:

    double x1, x2, x3, y1, y2, y3;

    double sideLength (double a1, double a2, double b1, double b2) const ;
    public:

    Triangle();
    Triangle(double x1, double x2, double x3, double y1, double y2, double y3);
    Triangle(const Triangle& t);
    ~Triangle();

    void getCoordinates  (double &outX1, double &outY1, double &outX2, double &outY2, double &outX3, double &outY3) ;

    double getArea() const;
    double getPerimeter() const;
};


#endif
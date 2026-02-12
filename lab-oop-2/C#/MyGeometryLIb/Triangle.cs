namespace MyGeometryLib;

public class Triangle
{
    
    private double x1, y1, x2, y2, x3, y3;
    private double GetSide(double ax, double ay, double bx, double by)
    { 
        return Math.Sqrt(Math.Pow(bx - ax, 2) + Math.Pow(by - ay, 2));
    }

    public Triangle()
    {
        x1 = 0.0;
        y1 = 0.0;
        x2 = 0.0;
        y2 = 0.0;
        x3 = 0.0;
        y3 = 0.0;
    }

    public Triangle(double X1, double Y1, double X2, double Y2, double X3, double Y3)
    {
        x1 = X1;
        y1 = Y1;
        x2 = X2;
        y2 = Y2;
        x3 = X3;
        y3 = Y3;
        
    }

    public Triangle(Triangle other){}
    
    ~Triangle() {}

    public string GetCoordinates()
    {
        return $"A({x1},{y1}), B({x2},{y2}), C({x3},{y3})";
    }

    public double GetArea()
    {
        return 0.5 * Math.Abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    }

    public double GetPerimeter()
    {
        double a = GetSide(x1, y1, x2, y2);
        double b = GetSide(x2, y2, x3, y3);
        double c = GetSide(x3, y3, x1, y1);
        return a + b + c;
    }
        
}
using MyGeometryLib;

namespace Lab2
{
    class Program
    {
         static void Main(string[] args)
        {
        Triangle exampleTriangle = new Triangle();

        Triangle exampleTriangle2 = new Triangle(10, 1, 1, 1, 1, 1);

        Triangle exampleTriangle3 = new Triangle(exampleTriangle2);
        


        Console.WriteLine("Coordinates: " + exampleTriangle2.GetCoordinates());
        Console.WriteLine("Perimetr: " + exampleTriangle2.GetPerimeter());
        Console.WriteLine("Area: " + exampleTriangle2.GetArea());

        }
    }
}

using System;
using lab_1;

Console.WriteLine("Enter x1, y1, x2, y2, x3, y3 separated by spaces:");
string input = Console.ReadLine();
string[] parts = input.Split(' ');


double x1 = double.Parse(parts[0]);
double y1 = double.Parse(parts[1]);
double x2 = double.Parse(parts[2]);
double y2 = double.Parse(parts[3]);
double x3 = double.Parse(parts[4]);
double y3 = double.Parse(parts[5]);


Triangle tri = new Triangle(x1, y1, x2, y2, x3, y3);


Console.WriteLine($"Perimeter: {tri.GetPerimeter():F2}");
Console.WriteLine($"Area: {tri.GetArea():F2}");
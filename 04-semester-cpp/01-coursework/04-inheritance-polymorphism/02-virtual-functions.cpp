/*
 * Topic: Inheritance & Polymorphism
 * Sample 2: Virtual Functions and Abstract Classes
 *
 * Demonstrates:
 * - Virtual functions for dynamic dispatch
 * - Pure virtual functions
 * - Abstract base classes
 * - Virtual destructors
 * - Method resolution order
 * - Polymorphic behavior
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// Abstract base class
class Shape
{
protected:
  string name;

public:
  Shape(string n) : name(n) {}

  virtual ~Shape()
  {
    cout << "Shape destructor called" << endl;
  }

  virtual double calculateArea() const = 0;      // Pure virtual
  virtual double calculatePerimeter() const = 0; // Pure virtual

  void displayName() const
  {
    cout << "Shape: " << name << endl;
  }

  void displayDimensions() const
  {
    cout << fixed << setprecision(2);
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
  }
};

// Concrete class: Rectangle
class Rectangle : public Shape
{
private:
  double length;
  double width;

public:
  Rectangle(string n, double l, double w)
      : Shape(n), length(l), width(w) {}

  double calculateArea() const override
  {
    return length * width;
  }

  double calculatePerimeter() const override
  {
    return 2 * (length + width);
  }
};

// Concrete class: Circle
class Circle : public Shape
{
private:
  double radius;

public:
  Circle(string n, double r) : Shape(n), radius(r) {}

  double calculateArea() const override
  {
    return M_PI * radius * radius;
  }

  double calculatePerimeter() const override
  {
    return 2 * M_PI * radius;
  }
};

// Concrete class: Triangle
class Triangle : public Shape
{
private:
  double a, b, c; // sides

public:
  Triangle(string n, double side_a, double side_b, double side_c)
      : Shape(n), a(side_a), b(side_b), c(side_c) {}

  double calculateArea() const override
  {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
  }

  double calculatePerimeter() const override
  {
    return a + b + c;
  }
};

int main()
{
  cout << "=== Virtual Functions and Abstract Classes ===" << endl
       << endl;

  // 1. Create shape objects
  cout << "--- Creating Shapes ---" << endl;
  Rectangle rect("Rectangle", 5, 3);
  Circle circle("Circle", 4);
  Triangle triangle("Triangle", 3, 4, 5);

  // 2. Polymorphic behavior with pointers
  cout << "\n--- Polymorphic Array of Shapes ---" << endl;
  Shape *shapes[] = {&rect, &circle, &triangle};

  for (int i = 0; i < 3; i++)
  {
    shapes[i]->displayName();
    shapes[i]->displayDimensions();
    cout << endl;
  }

  // 3. Individual shape information
  cout << "--- Individual Shape Information ---" << endl;
  cout << "Rectangle:" << endl;
  cout << fixed << setprecision(2);
  cout << "  Area: " << rect.calculateArea() << endl;
  cout << "  Perimeter: " << rect.calculatePerimeter() << endl;

  cout << "\nCircle:" << endl;
  cout << "  Area: " << circle.calculateArea() << endl;
  cout << "  Perimeter: " << circle.calculatePerimeter() << endl;

  cout << "\nTriangle:" << endl;
  cout << "  Area: " << triangle.calculateArea() << endl;
  cout << "  Perimeter: " << triangle.calculatePerimeter() << endl;

  // 4. Calculate total area
  cout << "\n--- Total Calculations ---" << endl;
  double totalArea = 0;
  double totalPerimeter = 0;

  for (int i = 0; i < 3; i++)
  {
    totalArea += shapes[i]->calculateArea();
    totalPerimeter += shapes[i]->calculatePerimeter();
  }

  cout << fixed << setprecision(2);
  cout << "Total Area: " << totalArea << endl;
  cout << "Total Perimeter: " << totalPerimeter << endl;

  cout << "\n--- End of program ---" << endl;

  return 0;
}

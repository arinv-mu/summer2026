/**
 * Topic: Inheritance & Polymorphism
 * Sample 2: Abstract Classes and Interfaces
 *
 * Demonstrates:
 * - Abstract classes with abstract methods
 * - Multiple inheritance via interfaces
 * - Interface implementation
 * - Polymorphic behavior with interfaces
 * - Concrete class implementations
 */

// Abstract class
public abstract class Shape {
  protected String name;

  // Constructor
  public Shape(String name) {
    this.name = name;
  }

  // Abstract method (no implementation)
  public abstract double calculateArea();

  // Abstract method
  public abstract double calculatePerimeter();

  // Concrete method
  public void displayName() {
    System.out.println("Shape: " + this.name);
  }

  // Concrete method
  public void displayInfo() {
    displayName();
    System.out.printf("Area: %.2f\n", calculateArea());
    System.out.printf("Perimeter: %.2f\n", calculatePerimeter());
  }
}

// Interface 1
interface Drawable {
  void draw();
}

// Interface 2
interface Colorable {
  void setColor(String color);

  String getColor();
}

// Concrete class implementing Shape and interfaces
class Rectangle extends Shape implements Drawable, Colorable {
  private double length;
  private double width;
  private String color;

  // Constructor
  public Rectangle(String name, double length, double width, String color) {
    super(name);
    this.length = length;
    this.width = width;
    this.color = color;
  }

  // Implement abstract method from Shape
  @Override
  public double calculateArea() {
    return length * width;
  }

  // Implement abstract method from Shape
  @Override
  public double calculatePerimeter() {
    return 2 * (length + width);
  }

  // Implement Drawable interface
  @Override
  public void draw() {
    System.out.println("Drawing a rectangle with length " + length + " and width " + width);
  }

  // Implement Colorable interface
  @Override
  public void setColor(String color) {
    this.color = color;
  }

  // Implement Colorable interface
  @Override
  public String getColor() {
    return this.color;
  }

  @Override
  public void displayInfo() {
    super.displayInfo();
    System.out.println("Color: " + this.color);
  }
}

// Concrete class
class Circle extends Shape implements Drawable, Colorable {
  private double radius;
  private String color;

  // Constructor
  public Circle(String name, double radius, String color) {
    super(name);
    this.radius = radius;
    this.color = color;
  }

  // Implement abstract method
  @Override
  public double calculateArea() {
    return Math.PI * radius * radius;
  }

  // Implement abstract method
  @Override
  public double calculatePerimeter() {
    return 2 * Math.PI * radius;
  }

  // Implement Drawable
  @Override
  public void draw() {
    System.out.println("Drawing a circle with radius " + radius);
  }

  // Implement Colorable
  @Override
  public void setColor(String color) {
    this.color = color;
  }

  // Implement Colorable
  @Override
  public String getColor() {
    return this.color;
  }

  @Override
  public void displayInfo() {
    super.displayInfo();
    System.out.println("Color: " + this.color);
  }
}

// Concrete class
class Triangle extends Shape implements Drawable {
  private double a, b, c; // sides
  private String color = "Black";

  // Constructor
  public Triangle(String name, double a, double b, double c) {
    super(name);
    this.a = a;
    this.b = b;
    this.c = c;
  }

  // Implement abstract method - using Heron's formula
  @Override
  public double calculateArea() {
    double s = (a + b + c) / 2;
    return Math.sqrt(s * (s - a) * (s - b) * (s - c));
  }

  // Implement abstract method
  @Override
  public double calculatePerimeter() {
    return a + b + c;
  }

  // Implement Drawable
  @Override
  public void draw() {
    System.out.println("Drawing a triangle with sides " + a + ", " + b + ", " + c);
  }
}

// Main class
public class AbstractAndInterfaceDemo {
  public static void main(String[] args) {
    System.out.println("=== Abstract Classes and Interfaces ===\n");

    // 1. Create shape objects
    System.out.println("--- Creating Shapes ---");
    Rectangle rectangle = new Rectangle("Rectangle", 5, 3, "Red");
    Circle circle = new Circle("Circle", 4, "Blue");
    Triangle triangle = new Triangle("Triangle", 3, 4, 5);

    // 2. Display information using polymorphism
    System.out.println("\n--- Shape Information ---");
    rectangle.displayInfo();
    System.out.println();
    circle.displayInfo();
    System.out.println();
    triangle.displayInfo();

    // 3. Polymorphic array of Shape
    System.out.println("\n--- Polymorphic Shape Array ---");
    Shape[] shapes = { rectangle, circle, triangle };

    for (Shape shape : shapes) {
      System.out.println("\n" + shape.name);
      System.out.printf("Area: %.2f\n", shape.calculateArea());
      System.out.printf("Perimeter: %.2f\n", shape.calculatePerimeter());
    }

    // 4. Using Drawable interface
    System.out.println("\n--- Drawing Shapes ---");
    Drawable[] drawables = { rectangle, circle, triangle };

    for (Drawable drawable : drawables) {
      drawable.draw();
    }

    // 5. Using Colorable interface (polymorphism)
    System.out.println("\n--- Setting Colors ---");
    Colorable[] colorables = { rectangle, circle };

    for (Colorable colorable : colorables) {
      System.out.println("Color: " + colorable.getColor());
      colorable.setColor("Green");
      System.out.println("New color: " + colorable.getColor());
    }

    // 6. Check if object implements interface
    System.out.println("\n--- Interface Checks ---");
    if (rectangle instanceof Colorable) {
      System.out.println("Rectangle is Colorable");
    }
    if (triangle instanceof Colorable) {
      System.out.println("Triangle is Colorable");
    } else {
      System.out.println("Triangle is NOT Colorable");
    }
  }
}

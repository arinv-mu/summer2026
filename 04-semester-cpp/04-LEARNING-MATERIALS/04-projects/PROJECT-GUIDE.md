# C++ Semester Project: Graphics Application or Game Engine

**Duration**: Weeks 19-20 (Final 2 weeks of semester)  
**Difficulty**: Advanced  
**Skills Used**: OOP, STL, CMake, Memory Management, Testing

## Project Goals

Build a complete C++ application that demonstrates:
1. Object-oriented design with classes and inheritance
2. STL containers (vector, map) for data management
3. Smart pointers for memory safety
4. CMake for multi-file project management
5. Unit testing with Google Test

## Project Options

### Option A: Graphics Renderer (Simpler)
Render geometric shapes with rotation/scaling

### Option B: Game Engine (More Complex)
2D game with game objects, collision detection, input handling

## Recommended: Graphics Application

**Features**:
- Define geometric shapes (Circle, Rectangle, Triangle)
- Display shapes in console or simple graphics
- Perform transformations (rotate, scale, move)
- Calculate properties (area, perimeter)
- Test all components

## Project Structure

```
04-semester-cpp/
├── CMakeLists.txt
├── include/
│   ├── Shape.h
│   ├── Rectangle.h
│   ├── Circle.h
│   └── Graphics.h
├── src/
│   ├── main.cpp
│   ├── Shape.cpp
│   ├── Rectangle.cpp
│   ├── Circle.cpp
│   └── Graphics.cpp
├── tests/
│   ├── test_shape.cpp
│   └── test_graphics.cpp
└── README.md
```

## Core Classes

### Shape.h (Base Class)
```cpp
#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
protected:
    std::string name;
    double x, y;  // Position
    
public:
    Shape(const std::string& name, double x, double y);
    virtual ~Shape() = default;
    
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual std::string toString() const = 0;
    
    void move(double dx, double dy);
    double getX() const { return x; }
    double getY() const { return y; }
};

#endif
```

### Rectangle.h
```cpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width, height;
    
public:
    Rectangle(double x, double y, double w, double h);
    
    double getArea() const override;
    double getPerimeter() const override;
    std::string toString() const override;
};

#endif
```

### Circle.h
```cpp
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double x, double y, double r);
    
    double getArea() const override;
    double getPerimeter() const override;
    std::string toString() const override;
};

#endif
```

## Implementation Example

### Rectangle.cpp
```cpp
#include "Rectangle.h"
#include <sstream>

Rectangle::Rectangle(double x, double y, double w, double h)
    : Shape("Rectangle", x, y), width(w), height(h) {}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}

std::string Rectangle::toString() const {
    std::ostringstream oss;
    oss << name << " at (" << x << "," << y 
        << ") - " << width << "x" << height;
    return oss.str();
}
```

## Main Application

### main.cpp
```cpp
#include <iostream>
#include <vector>
#include <memory>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    
    // Create shapes
    shapes.push_back(std::make_unique<Rectangle>(0, 0, 10, 20));
    shapes.push_back(std::make_unique<Circle>(5, 5, 3));
    shapes.push_back(std::make_unique<Rectangle>(10, 10, 5, 5));
    
    // Display shapes
    std::cout << "Shapes:\n";
    for (const auto& shape : shapes) {
        std::cout << "  " << shape->toString() << "\n";
        std::cout << "    Area: " << shape->getArea() << "\n";
        std::cout << "    Perimeter: " << shape->getPerimeter() << "\n";
    }
    
    // Calculate total area
    double totalArea = 0;
    for (const auto& shape : shapes) {
        totalArea += shape->getArea();
    }
    std::cout << "\nTotal area: " << totalArea << "\n";
    
    return 0;
}
```

## CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.20)
project(GraphicsApp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
set(SOURCES
    src/main.cpp
    src/Shape.cpp
    src/Rectangle.cpp
    src/Circle.cpp
)

add_executable(app ${SOURCES})
target_include_directories(app PRIVATE include)
target_compile_options(app PRIVATE -Wall -Wextra -Werror)

# Testing
enable_testing()
find_package(GTest REQUIRED)

add_executable(test_app
    tests/test_shape.cpp
    src/Shape.cpp
    src/Rectangle.cpp
    src/Circle.cpp
)

target_include_directories(test_app PRIVATE include)
target_link_libraries(test_app GTest::GTest GTest::Main)

add_test(NAME test_app COMMAND test_app)
```

## Unit Tests

### test_shape.cpp
```cpp
#include <gtest/gtest.h>
#include "Rectangle.h"
#include "Circle.h"
#include <cmath>

TEST(RectangleTest, Area) {
    Rectangle rect(0, 0, 10, 5);
    EXPECT_DOUBLE_EQ(50.0, rect.getArea());
}

TEST(RectangleTest, Perimeter) {
    Rectangle rect(0, 0, 10, 5);
    EXPECT_DOUBLE_EQ(30.0, rect.getPerimeter());
}

TEST(CircleTest, Area) {
    Circle circle(0, 0, 5);
    double expected = M_PI * 25;
    EXPECT_NEAR(expected, circle.getArea(), 0.01);
}

TEST(CircleTest, Perimeter) {
    Circle circle(0, 0, 5);
    double expected = 2 * M_PI * 5;
    EXPECT_NEAR(expected, circle.getPerimeter(), 0.01);
}
```

## Project Milestones

### Milestone 1: Base Classes (3 hours)
- [ ] Create Shape base class with pure virtual methods
- [ ] Implement Rectangle and Circle subclasses
- [ ] Test area and perimeter calculations

### Milestone 2: Main Application (2 hours)
- [ ] Create main.cpp with shape creation
- [ ] Use vector<unique_ptr<Shape>> for polymorphic storage
- [ ] Display shapes with properties

### Milestone 3: Build & Testing (2 hours)
- [ ] Write CMakeLists.txt for multi-file project
- [ ] Write unit tests with Google Test
- [ ] Ensure all tests pass

### Milestone 4: Polish & Documentation (1 hour)
- [ ] Add error handling
- [ ] Write comprehensive README
- [ ] Add comments to code

## Build & Run

```bash
# Configure and build
cmake -B build -S .
make -C build

# Run application
./build/app

# Run tests
./build/test_app

# Or with CMake
ctest --build-config Release
```

## Success Criteria

- [ ] All classes compile without errors
- [ ] All unit tests pass
- [ ] Uses smart pointers (unique_ptr, shared_ptr)
- [ ] Uses STL containers (vector)
- [ ] Demonstrates inheritance and polymorphism
- [ ] CMake build works correctly
- [ ] Clear, documented code
- [ ] README with instructions

## Deliverables

1. **Header files** - All .h files in `include/`
2. **Implementation** - All .cpp files in `src/`
3. **Tests** - All test files in `tests/`
4. **CMakeLists.txt** - Build configuration
5. **README.md** - Usage and documentation

---

**Good luck!** This is a challenging but rewarding project! 🚀

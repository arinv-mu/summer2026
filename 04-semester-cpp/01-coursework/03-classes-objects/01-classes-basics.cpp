/*
 * Topic: Classes & Objects
 * Sample 1: Class Fundamentals
 *
 * Demonstrates:
 * - Class definition with private/public members
 * - Constructors (default and parameterized)
 * - Destructors
 * - Member functions
 * - Getters and setters
 * - Object creation and usage
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
private:
  string name;
  int studentId;
  double gpa;

public:
  // Default constructor
  Student() : name("Unknown"), studentId(0), gpa(0.0)
  {
    cout << "Default constructor called" << endl;
  }

  // Parameterized constructor
  Student(string n, int id, double g) : name(n), studentId(id), gpa(g)
  {
    cout << "Parameterized constructor called for " << name << endl;
  }

  // Destructor
  ~Student()
  {
    cout << "Destructor called for " << name << endl;
  }

  // Getter methods
  string getName() const
  {
    return name;
  }

  int getStudentId() const
  {
    return studentId;
  }

  double getGpa() const
  {
    return gpa;
  }

  // Setter methods
  void setName(string n)
  {
    name = n;
  }

  void setGpa(double g)
  {
    if (g >= 0 && g <= 4.0)
    {
      gpa = g;
    }
    else
    {
      cout << "Error: GPA must be between 0 and 4.0" << endl;
    }
  }

  // Member function
  void displayInfo() const
  {
    cout << "Student Information:" << endl;
    cout << "  Name: " << name << endl;
    cout << "  ID: " << studentId << endl;
    cout << fixed << setprecision(2);
    cout << "  GPA: " << gpa << endl;
  }

  // Get letter grade based on GPA
  char getGrade() const
  {
    if (gpa >= 3.7)
      return 'A';
    if (gpa >= 3.3)
      return 'B';
    if (gpa >= 3.0)
      return 'C';
    if (gpa >= 2.0)
      return 'D';
    return 'F';
  }
};

int main()
{
  cout << "=== Classes and Objects ===" << endl
       << endl;

  // 1. Create objects
  cout << "--- Creating Student Objects ---" << endl;
  Student student1; // Uses default constructor
  cout << endl;

  Student student2("Alice", 101, 3.8); // Uses parameterized constructor
  cout << endl;

  Student student3("Bob", 102, 3.5);
  cout << endl;

  // 2. Display information
  cout << "--- Student Information ---" << endl;
  student2.displayInfo();
  cout << endl;

  student3.displayInfo();
  cout << endl;

  // 3. Use getters
  cout << "--- Using Getters ---" << endl;
  cout << "Student 2 Name: " << student2.getName() << endl;
  cout << "Student 2 ID: " << student2.getStudentId() << endl;
  cout << fixed << setprecision(2);
  cout << "Student 2 GPA: " << student2.getGpa() << endl;

  // 4. Use setters
  cout << "\n--- Using Setters ---" << endl;
  student1.setName("Charlie");
  student1.setGpa(3.6);
  student1.displayInfo();

  // 5. Get grade
  cout << "\n--- Grade Assignment ---" << endl;
  cout << student2.getName() << "'s Grade: " << student2.getGrade() << endl;
  cout << student3.getName() << "'s Grade: " << student3.getGrade() << endl;

  // 6. Invalid GPA test
  cout << "\n--- Validation Test ---" << endl;
  student2.setGpa(4.5); // Should show error
  cout << "After attempted invalid GPA, current GPA: "
       << fixed << setprecision(2) << student2.getGpa() << endl;

  // Destructors will be called automatically when objects go out of scope
  cout << "\n--- End of program (destructors will be called) ---" << endl;

  return 0;
}

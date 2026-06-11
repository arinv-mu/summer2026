/*
 * Topic: Memory Management & Smart Pointers
 * Sample 1: Dynamic Memory and RAII
 *
 * Demonstrates:
 * - Manual memory management (new/delete)
 * - Resource Acquisition Is Initialization (RAII)
 * - Memory leaks and how to avoid them
 * - Proper cleanup patterns
 * - Destructor responsibilities
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee
{
private:
  string name;
  int id;
  double salary;

public:
  Employee(string n, int i, double s) : name(n), id(i), salary(s)
  {
    cout << "Employee constructor: " << name << endl;
  }

  ~Employee()
  {
    cout << "Employee destructor: " << name << endl;
  }

  void displayInfo() const
  {
    cout << "Name: " << name << ", ID: " << id
         << ", Salary: $" << fixed << setprecision(2) << salary << endl;
  }

  string getName() const { return name; }
};

int main()
{
  cout << "=== Memory Management & RAII ===" << endl
       << endl;

  // 1. Static allocation (stack)
  cout << "--- Stack Allocation ---" << endl;
  Employee emp1("Alice", 101, 50000);
  emp1.displayInfo();
  cout << endl;

  // 2. Dynamic allocation (heap)
  cout << "--- Heap Allocation (new/delete) ---" << endl;
  Employee *empPtr = new Employee("Bob", 102, 55000);
  empPtr->displayInfo();

  // Don't forget to delete
  delete empPtr;
  empPtr = nullptr; // Good practice
  cout << endl;

  // 3. Multiple dynamic objects
  cout << "--- Multiple Dynamic Allocations ---" << endl;
  Employee *emp2 = new Employee("Charlie", 103, 60000);
  Employee *emp3 = new Employee("Diana", 104, 65000);

  emp2->displayInfo();
  emp3->displayInfo();

  delete emp2;
  delete emp3;
  emp2 = nullptr;
  emp3 = nullptr;
  cout << endl;

  // 4. Dynamic arrays
  cout << "--- Dynamic Arrays ---" << endl;
  int size = 5;
  int *dynamicArray = new int[size];

  cout << "Filling array:" << endl;
  for (int i = 0; i < size; i++)
  {
    dynamicArray[i] = (i + 1) * 10;
    cout << "Array[" << i << "] = " << dynamicArray[i] << endl;
  }

  delete[] dynamicArray; // Note: delete[] for arrays
  dynamicArray = nullptr;
  cout << endl;

  // 5. RAII pattern with wrapper class
  cout << "--- RAII Pattern ---" << endl;

  class ManagedEmployee
  {
  private:
    Employee *employee;

  public:
    ManagedEmployee(string n, int i, double s)
    {
      employee = new Employee(n, i, s);
    }

    ~ManagedEmployee()
    {
      delete employee;
      employee = nullptr;
    }

    Employee *get() { return employee; }

    void display() const
    {
      employee->displayInfo();
    }
  };

  // ManagedEmployee automatically cleans up when scope ends
  {
    cout << "Creating managed employee:" << endl;
    ManagedEmployee managed("Eve", 105, 70000);
    managed.display();
    cout << "Managed object going out of scope..." << endl;
  } // Destructor called here automatically
  cout << endl;

  // 6. Memory size information
  cout << "--- Memory Sizes ---" << endl;
  cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
  cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;
  cout << "sizeof(Employee): " << sizeof(Employee) << " bytes" << endl;
  cout << "sizeof(int*): " << sizeof(int *) << " bytes" << endl;

  return 0;
}

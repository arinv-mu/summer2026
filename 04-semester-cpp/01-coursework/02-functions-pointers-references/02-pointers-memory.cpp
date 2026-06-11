/*
 * Topic: Functions & Pointers/References
 * Sample 2: Pointers and Dynamic Memory
 *
 * Demonstrates:
 * - Pointer declaration and dereferencing
 * - Address-of and dereference operators
 * - Pointer arithmetic
 * - Dynamic memory allocation (new/delete)
 * - Pointer arrays
 * - nullptr
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "=== Pointers and Dynamic Memory ===" << endl
       << endl;

  // 1. Basic pointer operations
  cout << "--- Basic Pointer Operations ---" << endl;
  int value = 42;
  int *ptr = &value; // Get address of value

  cout << "value = " << value << endl;
  cout << "Address of value: " << &value << endl;
  cout << "Pointer ptr: " << ptr << endl;
  cout << "Dereference *ptr: " << *ptr << endl;

  // 2. Pointer to different types
  cout << "\n--- Pointers to Different Types ---" << endl;
  double doubleValue = 3.14;
  double *doublePtr = &doubleValue;
  cout << "Double value: " << *doublePtr << endl;

  char charValue = 'A';
  char *charPtr = &charValue;
  cout << "Char value: " << *charPtr << endl;

  // 3. Pointer arithmetic
  cout << "\n--- Pointer Arithmetic ---" << endl;
  int array[] = {10, 20, 30, 40, 50};
  int *arrayPtr = array; // Points to first element

  cout << "Array: ";
  for (int i = 0; i < 5; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;

  cout << "\nUsing pointer arithmetic:" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << "*(arrayPtr + " << i << ") = " << *(arrayPtr + i) << endl;
  }

  // 4. Dynamic memory allocation
  cout << "\n--- Dynamic Memory Allocation (new/delete) ---" << endl;
  int *dynamicInt = new int(100); // Allocate on heap
  cout << "Dynamically allocated int: " << *dynamicInt << endl;

  double *dynamicDouble = new double(2.71828);
  cout << "Dynamically allocated double: " << *dynamicDouble << endl;

  // Free memory
  delete dynamicInt;
  delete dynamicDouble;
  cout << "Memory freed" << endl;

  // 5. Dynamic array allocation
  cout << "\n--- Dynamic Array ---" << endl;
  int size = 5;
  int *dynamicArray = new int[size];

  cout << "Initializing dynamic array:" << endl;
  for (int i = 0; i < size; i++)
  {
    dynamicArray[i] = (i + 1) * 10;
    cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << endl;
  }

  // Free array memory
  delete[] dynamicArray;
  cout << "Dynamic array freed" << endl;

  // 6. Null pointer
  cout << "\n--- Null Pointer ---" << endl;
  int *nullPtr = nullptr;
  cout << "nullPtr == nullptr: " << (nullPtr == nullptr) << endl;

  int *regularPtr = &value;
  cout << "regularPtr == nullptr: " << (regularPtr == nullptr) << endl;

  // 7. Pointer to pointer
  cout << "\n--- Pointer to Pointer ---" << endl;
  int mainValue = 25;
  int *ptr1 = &mainValue;
  int **ptr2 = &ptr1; // Pointer to pointer

  cout << "Value: " << mainValue << endl;
  cout << "Via ptr1 (*ptr1): " << *ptr1 << endl;
  cout << "Via ptr2 (**ptr2): " << **ptr2 << endl;

  // 8. Modifying value through pointer
  cout << "\n--- Modifying Value Through Pointer ---" << endl;
  int x = 50;
  int *xPtr = &x;
  cout << "Before: x = " << x << endl;

  *xPtr = 100; // Modify original value
  cout << "After: x = " << x << endl;

  // 9. Pointer sizes
  cout << "\n--- Pointer Sizes ---" << endl;
  cout << "sizeof(int*) = " << sizeof(int *) << " bytes" << endl;
  cout << "sizeof(double*) = " << sizeof(double *) << " bytes" << endl;
  cout << "sizeof(char*) = " << sizeof(char *) << " bytes" << endl;

  return 0;
}

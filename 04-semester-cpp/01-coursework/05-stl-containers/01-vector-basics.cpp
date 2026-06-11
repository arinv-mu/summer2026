/*
 * Topic: STL Containers
 * Sample 1: Vector and Basic Operations
 *
 * Demonstrates:
 * - std::vector creation and initialization
 * - push_back and pop_back operations
 * - Element access (at, [])
 * - Iterators and range-based for loops
 * - size(), capacity(), empty()
 * - Sorting and searching
 * - Vector of objects
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  cout << "=== STL Containers: Vector ===" << endl
       << endl;

  // 1. Create empty vector
  cout << "--- Creating Vectors ---" << endl;
  vector<int> numbers;
  cout << "Created empty vector" << endl;

  // 2. Add elements
  cout << "\n--- Adding Elements (push_back) ---" << endl;
  numbers.push_back(45);
  numbers.push_back(23);
  numbers.push_back(89);
  numbers.push_back(12);
  numbers.push_back(56);

  cout << "Added 5 elements" << endl;
  cout << "Size: " << numbers.size() << endl;
  cout << "Capacity: " << numbers.capacity() << endl;

  // 3. Access elements
  cout << "\n--- Accessing Elements ---" << endl;
  cout << "First element: " << numbers[0] << endl;
  cout << "Last element: " << numbers[numbers.size() - 1] << endl;

  // Using at() with bounds checking
  cout << "Element at index 2: " << numbers.at(2) << endl;

  // 4. Iterate with for loop
  cout << "\n--- Iteration (for loop) ---" << endl;
  for (int i = 0; i < numbers.size(); i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  // 5. Iterate with enhanced for loop
  cout << "\n--- Iteration (range-based for) ---" << endl;
  for (int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;

  // 6. Iterate with iterators
  cout << "\n--- Iteration (iterators) ---" << endl;
  for (auto it = numbers.begin(); it != numbers.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 7. Sort vector
  cout << "\n--- Sorting ---" << endl;
  sort(numbers.begin(), numbers.end());
  cout << "Sorted: ";
  for (int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;

  // 8. Reverse sort
  cout << "\n--- Reverse Sorting ---" << endl;
  sort(numbers.begin(), numbers.end(), greater<int>());
  cout << "Reverse sorted: ";
  for (int num : numbers)
  {
    cout << num << " ";
  }
  cout << endl;

  // 9. Search for element
  cout << "\n--- Searching ---" << endl;
  auto found = find(numbers.begin(), numbers.end(), 56);
  if (found != numbers.end())
  {
    cout << "Found 56 at index: " << (found - numbers.begin()) << endl;
  }

  // 10. Vector of strings
  cout << "\n--- Vector of Strings ---" << endl;
  vector<string> fruits = {"Apple", "Banana", "Orange", "Mango"};
  for (const auto &fruit : fruits)
  {
    cout << fruit << " ";
  }
  cout << endl;

  // 11. Vector initialization
  cout << "\n--- Vector Initialization ---" << endl;
  vector<int> vec1(5, 10); // 5 elements, each with value 10
  cout << "Vector with 5 elements (value 10): ";
  for (int num : vec1)
  {
    cout << num << " ";
  }
  cout << endl;

  // 12. Remove elements
  cout << "\n--- Removing Elements ---" << endl;
  cout << "Before pop_back: size = " << numbers.size() << endl;
  numbers.pop_back();
  cout << "After pop_back: size = " << numbers.size() << endl;

  // 13. Clear vector
  cout << "\n--- Clearing Vector ---" << endl;
  cout << "Before clear: size = " << numbers.size() << ", empty = "
       << numbers.empty() << endl;
  numbers.clear();
  cout << "After clear: size = " << numbers.size() << ", empty = "
       << numbers.empty() << endl;

  return 0;
}

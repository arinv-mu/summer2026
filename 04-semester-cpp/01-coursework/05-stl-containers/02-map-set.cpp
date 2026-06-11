/*
 * Topic: STL Containers
 * Sample 2: Map and Set
 *
 * Demonstrates:
 * - std::map for key-value pairs
 * - std::set for unique elements
 * - Insert and find operations
 * - Iteration through containers
 * - Map ordering and searching
 * - Set operations (union, intersection)
 */

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
  cout << "=== STL Containers: Map and Set ===" << endl
       << endl;

  // 1. Create map for student grades
  cout << "--- Creating Map ---" << endl;
  map<string, double> studentGrades;

  // 2. Insert elements
  cout << "\nAdding students:" << endl;
  studentGrades["Alice"] = 3.8;
  studentGrades["Bob"] = 3.5;
  studentGrades["Charlie"] = 3.9;
  studentGrades["Diana"] = 3.7;

  cout << "Added 4 students" << endl;

  // 3. Access elements
  cout << "\n--- Accessing Elements ---" << endl;
  cout << "Alice's GPA: " << studentGrades["Alice"] << endl;
  cout << "Bob's GPA: " << studentGrades["Bob"] << endl;

  // 4. Check if key exists
  cout << "\n--- Checking Keys ---" << endl;
  if (studentGrades.find("Alice") != studentGrades.end())
  {
    cout << "Found Alice in map" << endl;
  }
  if (studentGrades.find("Eve") == studentGrades.end())
  {
    cout << "Eve not found in map" << endl;
  }

  // 5. Iterate through map
  cout << "\n--- Iterating Through Map ---" << endl;
  cout << fixed << setprecision(2);
  for (const auto &pair : studentGrades)
  {
    cout << pair.first << " -> " << pair.second << endl;
  }

  // 6. Get size
  cout << "\nMap size: " << studentGrades.size() << endl;

  // 7. Remove element
  cout << "\n--- Removing Element ---" << endl;
  studentGrades.erase("Bob");
  cout << "After removing Bob: size = " << studentGrades.size() << endl;

  // 8. Create set for unique numbers
  cout << "\n--- Creating Set ---" << endl;
  set<int> uniqueNumbers;

  // 9. Insert elements (duplicates not added)
  cout << "Adding numbers (with duplicates):" << endl;
  uniqueNumbers.insert(10);
  uniqueNumbers.insert(20);
  uniqueNumbers.insert(30);
  uniqueNumbers.insert(20); // Duplicate - not added
  uniqueNumbers.insert(40);
  uniqueNumbers.insert(10); // Duplicate - not added

  cout << "Set size: " << uniqueNumbers.size() << endl;

  // 10. Iterate set
  cout << "\n--- Set Contents (automatically sorted) ---" << endl;
  for (int num : uniqueNumbers)
  {
    cout << num << " ";
  }
  cout << endl;

  // 11. Search in set
  cout << "\n--- Searching in Set ---" << endl;
  if (uniqueNumbers.find(30) != uniqueNumbers.end())
  {
    cout << "Found 30 in set" << endl;
  }
  if (uniqueNumbers.find(50) == uniqueNumbers.end())
  {
    cout << "50 not found in set" << endl;
  }

  // 12. Set operations
  cout << "\n--- Set Operations ---" << endl;
  set<int> set1 = {1, 2, 3, 4, 5};
  set<int> set2 = {3, 4, 5, 6, 7};

  cout << "Set 1: ";
  for (int num : set1)
    cout << num << " ";
  cout << endl;

  cout << "Set 2: ";
  for (int num : set2)
    cout << num << " ";
  cout << endl;

  // Union
  set<int> unionSet;
  set_union(set1.begin(), set1.end(),
            set2.begin(), set2.end(),
            inserter(unionSet, unionSet.begin()));

  cout << "Union: ";
  for (int num : unionSet)
    cout << num << " ";
  cout << endl;

  // Intersection
  set<int> intersectionSet;
  set_intersection(set1.begin(), set1.end(),
                   set2.begin(), set2.end(),
                   inserter(intersectionSet, intersectionSet.begin()));

  cout << "Intersection: ";
  for (int num : intersectionSet)
    cout << num << " ";
  cout << endl;

  // 13. Map with find and count
  cout << "\n--- Advanced Map Operations ---" << endl;
  cout << fixed << setprecision(2);
  cout << "Current student GPA map:" << endl;
  for (const auto &pair : studentGrades)
  {
    cout << "  " << pair.first << ": " << pair.second << endl;
  }

  return 0;
}

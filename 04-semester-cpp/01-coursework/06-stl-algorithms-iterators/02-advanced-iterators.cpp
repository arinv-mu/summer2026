/*
 * Topic: STL Algorithms & Iterators
 * Sample 2: Advanced Iterator Operations
 *
 * Demonstrates:
 * - Different iterator types
 * - Iterator operations and arithmetic
 * - Reverse iterators
 * - std::distance and std::advance
 * - Custom comparators
 * - Algorithm composition
 */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

int main()
{
  cout << "=== Advanced Iterator Operations ===" << endl
       << endl;

  // 1. Vector iterators (random access)
  cout << "--- Vector Iterators (Random Access) ---" << endl;
  vector<int> numbers = {10, 20, 30, 40, 50};

  cout << "Forward iteration:" << endl;
  for (auto it = numbers.begin(); it != numbers.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 2. Reverse iterators
  cout << "\n--- Reverse Iterators ---" << endl;
  cout << "Backward iteration: ";
  for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 3. Iterator arithmetic
  cout << "\n--- Iterator Arithmetic ---" << endl;
  auto it = numbers.begin();
  cout << "Begin: " << *it << endl;
  cout << "Begin + 2: " << *(it + 2) << endl;
  cout << "End - 1: " << *(numbers.end() - 1) << endl;

  // 4. Distance between iterators
  cout << "\n--- std::distance ---" << endl;
  auto start = numbers.begin();
  auto end = numbers.end();
  cout << "Distance between begin and end: " << distance(start, end) << endl;

  auto mid = numbers.begin() + 2;
  cout << "Distance from begin to middle: " << distance(start, mid) << endl;

  // 5. Advance iterator
  cout << "\n--- std::advance ---" << endl;
  auto it2 = numbers.begin();
  cout << "Before advance: " << *it2 << endl;
  advance(it2, 3);
  cout << "After advance(3): " << *it2 << endl;

  // 6. List with bidirectional iterators
  cout << "\n--- List Iterators (Bidirectional) ---" << endl;
  list<int> myList = {5, 15, 25, 35, 45};

  cout << "List contents: ";
  for (auto it = myList.begin(); it != myList.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 7. Find with iterator
  cout << "\n--- Finding with Iterator ---" << endl;
  auto found = find(myList.begin(), myList.end(), 25);
  if (found != myList.end())
  {
    cout << "Found 25" << endl;
    cout << "Distance from start: " << distance(myList.begin(), found) << endl;
  }

  // 8. Range-based operations
  cout << "\n--- Range Operations ---" << endl;
  vector<int> vec = {1, 2, 3, 4, 5};

  // Sum using iterators
  int sum = accumulate(vec.begin(), vec.end(), 0);
  cout << "Sum (using iterators): " << sum << endl;

  // Sum of subset
  int partial_sum = accumulate(vec.begin() + 1, vec.begin() + 4, 0);
  cout << "Sum of elements 1-3: " << partial_sum << endl;

  // 9. Reverse entire vector
  cout << "\n--- Reversing with std::reverse ---" << endl;
  vector<int> toReverse = {10, 20, 30, 40, 50};
  cout << "Before: ";
  for (int n : toReverse)
    cout << n << " ";
  cout << endl;

  reverse(toReverse.begin(), toReverse.end());
  cout << "After: ";
  for (int n : toReverse)
    cout << n << " ";
  cout << endl;

  // 10. Custom sorting
  cout << "\n--- Custom Sorting with Iterators ---" << endl;
  vector<int> tosort = {45, 23, 89, 12, 56};
  cout << "Original: ";
  for (int n : tosort)
    cout << n << " ";
  cout << endl;

  // Sort in ascending order
  sort(tosort.begin(), tosort.end());
  cout << "Sorted ascending: ";
  for (int n : tosort)
    cout << n << " ";
  cout << endl;

  // Sort in descending order
  sort(tosort.begin(), tosort.end(), greater<int>());
  cout << "Sorted descending: ";
  for (int n : tosort)
    cout << n << " ";
  cout << endl;

  // 11. Erase with iterators
  cout << "\n--- Erase with Iterators ---" << endl;
  vector<int> erasable = {10, 20, 30, 40, 50};
  cout << "Before erase: ";
  for (int n : erasable)
    cout << n << " ";
  cout << endl;

  auto erase_it = find(erasable.begin(), erasable.end(), 30);
  if (erase_it != erasable.end())
  {
    erasable.erase(erase_it);
  }

  cout << "After erasing 30: ";
  for (int n : erasable)
    cout << n << " ";
  cout << endl;

  // 12. Insert with iterator
  cout << "\n--- Insert with Iterator ---" << endl;
  vector<int> insertable = {10, 20, 40, 50};
  cout << "Before insert: ";
  for (int n : insertable)
    cout << n << " ";
  cout << endl;

  auto insert_pos = insertable.begin() + 2;
  insertable.insert(insert_pos, 30);

  cout << "After inserting 30 at position 2: ";
  for (int n : insertable)
    cout << n << " ";
  cout << endl;

  return 0;
}

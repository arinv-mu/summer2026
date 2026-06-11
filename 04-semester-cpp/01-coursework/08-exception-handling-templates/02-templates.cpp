/*
 * Topic: Exception Handling & Templates
 * Sample 2: Templates and Generic Programming
 *
 * Demonstrates:
 * - Function templates
 * - Class templates
 * - Template specialization
 * - Generic algorithms
 * - Type inference with templates
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

// 1. Function template
template <typename T>
T findMax(T a, T b)
{
  return (a > b) ? a : b;
}

// 2. Function template with multiple types
template <typename T, typename U>
void printPair(T first, U second)
{
  cout << "First: " << first << ", Second: " << second << endl;
}

// 3. Template with default parameter
template <typename T = int>
class Pair
{
private:
  T first;
  T second;

public:
  Pair(T f, T s) : first(f), second(s) {}

  void display() const
  {
    cout << "Pair: (" << first << ", " << second << ")" << endl;
  }

  T getFirst() const { return first; }
  T getSecond() const { return second; }
};

// 4. Generic Stack class
template <typename T>
class Stack
{
private:
  vector<T> elements;

public:
  void push(const T &value)
  {
    elements.push_back(value);
  }

  T pop()
  {
    if (elements.empty())
    {
      throw runtime_error("Stack is empty");
    }
    T value = elements.back();
    elements.pop_back();
    return value;
  }

  bool isEmpty() const
  {
    return elements.empty();
  }

  int size() const
  {
    return elements.size();
  }
};

// 5. Bubble sort template
template <typename T>
void bubbleSort(vector<T> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main()
{
  cout << "=== Templates and Generic Programming ===" << endl
       << endl;

  // 1. Function template with different types
  cout << "--- Function Templates ---" << endl;
  cout << "Max of 5 and 10: " << findMax(5, 10) << endl;
  cout << "Max of 3.14 and 2.71: " << findMax(3.14, 2.71) << endl;
  cout << "Max of 'apple' and 'banana': " << findMax("apple", "banana") << endl;

  // 2. Template with multiple types
  cout << "\n--- Multi-Type Templates ---" << endl;
  printPair(10, "hello");
  printPair(3.14, 5);
  printPair("name", 25);

  // 3. Class template - Pair of integers
  cout << "\n--- Pair Template ---" << endl;
  Pair<int> intPair(5, 10);
  intPair.display();

  // 4. Class template - Pair of strings
  Pair<string> stringPair("Alice", "Bob");
  stringPair.display();

  // 5. Class template - Pair of doubles
  Pair<double> doublePair(3.14, 2.71);
  doublePair.display();

  // 6. Template with default type
  cout << "\n--- Template with Default Type ---" << endl;
  Pair<> defaultPair(100, 200); // Uses int by default
  defaultPair.display();

  // 7. Stack template with integers
  cout << "\n--- Stack Template (Integer) ---" << endl;
  Stack<int> intStack;
  intStack.push(10);
  intStack.push(20);
  intStack.push(30);

  cout << "Stack size: " << intStack.size() << endl;
  cout << "Popping: " << intStack.pop() << endl;
  cout << "Popping: " << intStack.pop() << endl;
  cout << "Stack size: " << intStack.size() << endl;

  // 8. Stack template with strings
  cout << "\n--- Stack Template (String) ---" << endl;
  Stack<string> stringStack;
  stringStack.push("Hello");
  stringStack.push("World");
  stringStack.push("C++");

  cout << "Stack size: " << stringStack.size() << endl;
  while (!stringStack.isEmpty())
  {
    cout << "Popped: " << stringStack.pop() << endl;
  }

  // 9. Vector sorting with templates
  cout << "\n--- Sorting with Templates ---" << endl;
  vector<int> numbers = {45, 23, 89, 12, 56, 34};
  cout << "Before sort: ";
  for (int n : numbers)
    cout << n << " ";
  cout << endl;

  bubbleSort(numbers);
  cout << "After sort: ";
  for (int n : numbers)
    cout << n << " ";
  cout << endl;

  // 10. Template with strings
  cout << "\n--- Vector of Strings ---" << endl;
  vector<string> words = {"cpp", "template", "generic", "algorithm", "abstract"};
  cout << "Before sort: ";
  for (const auto &word : words)
    cout << word << " ";
  cout << endl;

  bubbleSort(words);
  cout << "After sort: ";
  for (const auto &word : words)
    cout << word << " ";
  cout << endl;

  return 0;
}

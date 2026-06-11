/*
 * Topic: STL Algorithms & Iterators
 * Sample 1: Common Algorithms
 *
 * Demonstrates:
 * - std::sort, std::find, std::count
 * - std::transform, std::copy
 * - std::for_each
 * - Iterator types
 * - Algorithm complexity
 * - Lambda functions with algorithms
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  cout << "=== STL Algorithms & Iterators ===" << endl
       << endl;

  // 1. Create vector of numbers
  cout << "--- Creating Vector ---" << endl;
  vector<int> numbers = {45, 23, 89, 12, 56, 78, 34, 67, 90, 11};

  cout << "Original: ";
  for (int num : numbers)
    cout << num << " ";
  cout << endl;

  // 2. Sort algorithm
  cout << "\n--- std::sort ---" << endl;
  vector<int> sorted_nums = numbers;
  sort(sorted_nums.begin(), sorted_nums.end());

  cout << "Sorted: ";
  for (int num : sorted_nums)
    cout << num << " ";
  cout << endl;

  // 3. Reverse sort
  cout << "\n--- Reverse Sort ---" << endl;
  vector<int> reverse_sorted = numbers;
  sort(reverse_sorted.begin(), reverse_sorted.end(), greater<int>());

  cout << "Reverse sorted: ";
  for (int num : reverse_sorted)
    cout << num << " ";
  cout << endl;

  // 4. Find algorithm
  cout << "\n--- std::find ---" << endl;
  auto found = find(numbers.begin(), numbers.end(), 56);
  if (found != numbers.end())
  {
    cout << "Found 56 at distance: " << (found - numbers.begin()) << endl;
  }

  // 5. Count algorithm
  cout << "\n--- std::count ---" << endl;
  int count_56 = count(numbers.begin(), numbers.end(), 56);
  cout << "Count of 56: " << count_56 << endl;

  // 6. Count with condition using lambda
  cout << "\n--- std::count_if with Lambda ---" << endl;
  int count_large = count_if(numbers.begin(), numbers.end(),
                             [](int n)
                             { return n > 50; });
  cout << "Numbers greater than 50: " << count_large << endl;

  // 7. Transform algorithm
  cout << "\n--- std::transform ---" << endl;
  vector<int> doubled(numbers.size());
  transform(numbers.begin(), numbers.end(), doubled.begin(),
            [](int n)
            { return n * 2; });

  cout << "Doubled: ";
  for (int num : doubled)
    cout << num << " ";
  cout << endl;

  // 8. For_each algorithm
  cout << "\n--- std::for_each ---" << endl;
  cout << "Squared values: ";
  for_each(numbers.begin(), numbers.end(),
           [](int n)
           { cout << n * n << " "; });
  cout << endl;

  // 9. Min and Max algorithms
  cout << "\n--- std::min_element and std::max_element ---" << endl;
  auto min_it = min_element(numbers.begin(), numbers.end());
  auto max_it = max_element(numbers.begin(), numbers.end());

  cout << "Min value: " << *min_it << endl;
  cout << "Max value: " << *max_it << endl;

  // 10. Accumulate (sum)
  cout << "\n--- std::accumulate (Sum) ---" << endl;
  int sum = accumulate(numbers.begin(), numbers.end(), 0);
  cout << "Sum of all elements: " << sum << endl;

  double average = (double)sum / numbers.size();
  cout << fixed << setprecision(2);
  cout << "Average: " << average << endl;

  // 11. Copy algorithm
  cout << "\n--- std::copy ---" << endl;
  vector<int> copied;
  copy(numbers.begin(), numbers.end(), back_inserter(copied));
  cout << "Copied " << copied.size() << " elements" << endl;

  // 12. Vector of strings with algorithms
  cout << "\n--- String Vector Algorithms ---" << endl;
  vector<string> words = {"hello", "world", "cpp", "algorithm", "vector"};

  cout << "Words: ";
  for (const auto &word : words)
    cout << word << " ";
  cout << endl;

  // Find longest word
  auto longest = max_element(words.begin(), words.end(),
                             [](const string &a, const string &b)
                             {
                               return a.length() < b.length();
                             });
  cout << "Longest word: " << *longest << " (length: "
       << longest->length() << ")" << endl;

  return 0;
}

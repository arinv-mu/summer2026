/*
 * Topic: Exception Handling & Templates
 * Sample 1: Exception Handling
 *
 * Demonstrates:
 * - try-catch blocks
 * - Multiple catch blocks
 * - Custom exceptions
 * - Exception hierarchy
 * - std::exception
 * - Resource cleanup with exceptions
 */

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

// Custom exception class
class InsufficientFundsException : public exception
{
private:
  string message;

public:
  InsufficientFundsException(double balance, double amount)
      : message("Insufficient funds: have $" + to_string(balance) +
                ", need $" + to_string(amount)) {}

  const char *what() const noexcept override
  {
    return message.c_str();
  }
};

class BankAccount
{
private:
  double balance;

public:
  BankAccount(double initial) : balance(initial)
  {
    if (initial < 0)
    {
      throw invalid_argument("Initial balance cannot be negative");
    }
  }

  void withdraw(double amount)
  {
    if (amount <= 0)
    {
      throw invalid_argument("Withdrawal amount must be positive");
    }

    if (amount > balance)
    {
      throw InsufficientFundsException(balance, amount);
    }

    balance -= amount;
    cout << "Withdrew: $" << amount << ", New balance: $" << balance << endl;
  }

  void deposit(double amount)
  {
    if (amount <= 0)
    {
      throw invalid_argument("Deposit amount must be positive");
    }
    balance += amount;
    cout << "Deposited: $" << amount << ", New balance: $" << balance << endl;
  }

  double getBalance() const
  {
    return balance;
  }
};

int main()
{
  cout << "=== Exception Handling ===" << endl
       << endl;

  // 1. Try-catch with standard exceptions
  cout << "--- Standard Exception Handling ---" << endl;
  try
  {
    BankAccount account(1000);
    cout << "Account created with balance: $" << account.getBalance() << endl;

    account.withdraw(500);  // OK
    account.deposit(200);   // OK
    account.withdraw(1000); // Will throw exception
  }
  catch (const InsufficientFundsException &e)
  {
    cout << "Caught custom exception: " << e.what() << endl;
  }
  catch (const invalid_argument &e)
  {
    cout << "Caught invalid argument: " << e.what() << endl;
  }
  catch (const exception &e)
  {
    cout << "Caught general exception: " << e.what() << endl;
  }
  cout << endl;

  // 2. Negative account balance
  cout << "--- Testing Invalid Initialization ---" << endl;
  try
  {
    BankAccount invalidAccount(-100);
  }
  catch (const invalid_argument &e)
  {
    cout << "Caught exception: " << e.what() << endl;
  }
  cout << endl;

  // 3. Invalid withdrawal amount
  cout << "--- Testing Invalid Operations ---" << endl;
  try
  {
    BankAccount account(500);
    account.withdraw(-50); // Negative amount
  }
  catch (const invalid_argument &e)
  {
    cout << "Caught exception: " << e.what() << endl;
  }
  cout << endl;

  // 4. Try-catch-finally pattern (using RAII)
  cout << "--- Cleanup with RAII ---" << endl;
  class FileHandle
  {
  public:
    FileHandle() { cout << "File opened" << endl; }
    ~FileHandle() { cout << "File closed (automatic cleanup)" << endl; }
  };

  try
  {
    FileHandle file;
    cout << "Working with file..." << endl;
    throw runtime_error("Simulated file operation error");
    cout << "This won't execute" << endl;
  }
  catch (const exception &e)
  {
    cout << "Caught exception: " << e.what() << endl;
  }
  cout << endl;

  // 5. Multiple operations with exception handling
  cout << "--- Multiple Operations ---" << endl;
  vector<BankAccount> accounts;

  try
  {
    accounts.push_back(BankAccount(1000));
    accounts.push_back(BankAccount(500));
    accounts.push_back(BankAccount(2000));

    cout << "Attempting transactions..." << endl;
    accounts[0].withdraw(300);
    accounts[1].withdraw(600); // Will throw - insufficient funds
    accounts[2].deposit(100);  // Won't execute
  }
  catch (const exception &e)
  {
    cout << "Transaction failed: " << e.what() << endl;
  }
  cout << endl;

  // 6. Exception with validation
  cout << "--- Data Validation ---" << endl;
  try
  {
    vector<int> grades = {85, 92, 78};
    int index = 5;

    if (index >= grades.size())
    {
      throw out_of_range("Grade index out of range");
    }

    cout << "Grade: " << grades[index] << endl;
  }
  catch (const out_of_range &e)
  {
    cout << "Caught exception: " << e.what() << endl;
  }
  cout << endl;

  cout << "--- Program completed ---" << endl;

  return 0;
}

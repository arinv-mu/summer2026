/*
 * Topic: Classes & Objects
 * Sample 2: Static Members and Class Management
 *
 * Demonstrates:
 * - Static member variables
 * - Static member functions
 * - Static constants
 * - Class methods vs instance methods
 * - Counting objects with static counter
 * - Shared data among instances
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class BankAccount
{
private:
  static int totalAccounts;   // Static member variable
  static double totalBalance; // Class variable (shared)

  static const double MIN_BALANCE; // Static constant

  string accountNumber;
  string accountHolder;
  double balance;

public:
  // Constructor
  BankAccount(string accNum, string holder, double initialBalance)
      : accountNumber(accNum), accountHolder(holder), balance(initialBalance)
  {
    totalAccounts++;
    totalBalance += initialBalance;
    cout << "Account created: " << accountNumber << endl;
  }

  // Destructor
  ~BankAccount()
  {
    totalBalance -= balance;
    totalAccounts--;
  }

  // Instance method
  void deposit(double amount)
  {
    if (amount > 0)
    {
      balance += amount;
      totalBalance += amount;
      cout << "Deposited: $" << fixed << setprecision(2) << amount
           << " | New Balance: $" << balance << endl;
    }
    else
    {
      cout << "Error: Deposit amount must be positive" << endl;
    }
  }

  // Instance method with validation
  bool withdraw(double amount)
  {
    if (amount <= 0)
    {
      cout << "Error: Withdrawal amount must be positive" << endl;
      return false;
    }

    if (balance - amount < MIN_BALANCE)
    {
      cout << "Error: Cannot withdraw. Minimum balance: $"
           << MIN_BALANCE << endl;
      return false;
    }

    balance -= amount;
    totalBalance -= amount;
    cout << "Withdrawn: $" << fixed << setprecision(2) << amount
         << " | New Balance: $" << balance << endl;
    return true;
  }

  // Instance method
  void displayInfo() const
  {
    cout << "Account: " << accountNumber << " | Holder: " << accountHolder
         << " | Balance: $" << fixed << setprecision(2) << balance << endl;
  }

  // Static method - can be called without object
  static void displayStatistics()
  {
    cout << "\n=== Bank Statistics (Static Data) ===" << endl;
    cout << "Total Accounts: " << totalAccounts << endl;
    cout << fixed << setprecision(2);
    cout << "Total Balance: $" << totalBalance << endl;
    if (totalAccounts > 0)
    {
      cout << "Average Balance: $" << (totalBalance / totalAccounts) << endl;
    }
  }

  // Static getter methods
  static int getTotalAccounts()
  {
    return totalAccounts;
  }

  static double getTotalBalance()
  {
    return totalBalance;
  }

  // Static method to display constant
  static void displayMinimumBalance()
  {
    cout << "Minimum Balance Requirement: $" << MIN_BALANCE << endl;
  }
};

// Initialize static members (outside class definition)
int BankAccount::totalAccounts = 0;
double BankAccount::totalBalance = 0.0;
const double BankAccount::MIN_BALANCE = 100.0;

int main()
{
  cout << "=== Static Members and Class Methods ===" << endl
       << endl;

  // 1. Display minimum balance (static constant via static method)
  cout << "--- Minimum Balance Info ---" << endl;
  BankAccount::displayMinimumBalance();

  // 2. Create accounts
  cout << "\n--- Creating Accounts ---" << endl;
  BankAccount account1("ACC001", "Alice", 5000);
  BankAccount account2("ACC002", "Bob", 3000);
  BankAccount account3("ACC003", "Charlie", 2000);

  // 3. Display all accounts
  cout << "\n--- Account Details ---" << endl;
  account1.displayInfo();
  account2.displayInfo();
  account3.displayInfo();

  // 4. Access static data through static method
  cout << "\n--- Checking Static Data (Method 1) ---" << endl;
  BankAccount::displayStatistics();

  // 5. Access static data through getters
  cout << "\n--- Checking Static Data (Method 2) ---" << endl;
  cout << "Total accounts: " << BankAccount::getTotalAccounts() << endl;
  cout << fixed << setprecision(2);
  cout << "Total balance: $" << BankAccount::getTotalBalance() << endl;

  // 6. Perform transactions
  cout << "\n--- Transactions ---" << endl;
  account1.deposit(500);
  account2.withdraw(1500);
  account3.deposit(1000);

  // 7. Check static data after transactions
  cout << "\n--- After Transactions ---" << endl;
  BankAccount::displayStatistics();

  // 8. Test minimum balance constraint
  cout << "\n--- Testing Minimum Balance Constraint ---" << endl;
  account2.withdraw(3000); // Should fail
  account2.withdraw(500);  // Should succeed

  // 9. Display all accounts after more transactions
  cout << "\n--- Final Account Status ---" << endl;
  account1.displayInfo();
  account2.displayInfo();
  account3.displayInfo();

  // 10. Final statistics
  cout << "\n--- Final Statistics ---" << endl;
  BankAccount::displayStatistics();

  return 0;
}

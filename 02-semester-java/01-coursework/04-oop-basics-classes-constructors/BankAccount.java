/**
 * Topic: OOP Basics (Classes & Constructors)
 * Sample 2: Static Members and Class Variables
 *
 * Demonstrates:
 * - Static variables (class variables)
 * - Static methods (class methods)
 * - Static final constants
 * - Difference between instance and class variables
 * - Using static to create utility classes
 */

public class BankAccount {
  // Static constant
  private static final double MIN_BALANCE = 100.0;

  // Static variable - shared by all instances
  private static int totalAccounts = 0;
  private static double totalDeposits = 0;

  // Instance variables
  private String accountNumber;
  private String accountHolder;
  private double balance;

  // Constructor
  public BankAccount(String accountNumber, String accountHolder, double initialBalance) {
    this.accountNumber = accountNumber;
    this.accountHolder = accountHolder;
    this.balance = initialBalance;

    // Update static counter
    totalAccounts++;
    totalDeposits += initialBalance;
  }

  // Instance method
  public void deposit(double amount) {
    if (amount > 0) {
      this.balance += amount;
      totalDeposits += amount;
      System.out.println("Deposited: $" + amount + " | New Balance: $" + this.balance);
    } else {
      System.out.println("Error: Deposit amount must be positive");
    }
  }

  // Instance method with validation
  public boolean withdraw(double amount) {
    if (amount <= 0) {
      System.out.println("Error: Withdrawal amount must be positive");
      return false;
    }

    if (this.balance - amount < MIN_BALANCE) {
      System.out.println("Error: Cannot withdraw. Minimum balance must be $" + MIN_BALANCE);
      return false;
    }

    this.balance -= amount;
    System.out.println("Withdrawn: $" + amount + " | New Balance: $" + this.balance);
    return true;
  }

  // Instance method
  public void displayInfo() {
    System.out.printf("Account: %s | Holder: %s | Balance: $%.2f\n",
        this.accountNumber, this.accountHolder, this.balance);
  }

  // Static method - can be called without creating an object
  public static void displayStatistics() {
    System.out.println("\n=== Bank Statistics ===");
    System.out.println("Total Accounts: " + totalAccounts);
    System.out.printf("Total Deposits: $%.2f\n", totalDeposits);
    if (totalAccounts > 0) {
      System.out.printf("Average Balance per Account: $%.2f\n", totalDeposits / totalAccounts);
    }
  }

  // Static method
  public static int getTotalAccounts() {
    return totalAccounts;
  }

  // Static method
  public static double getTotalDeposits() {
    return totalDeposits;
  }

  public static void main(String[] args) {
    System.out.println("=== OOP Basics: Static Members ===\n");

    // 1. Create first account
    System.out.println("--- Creating Accounts ---");
    BankAccount account1 = new BankAccount("ACC001", "Alice", 5000);
    account1.displayInfo();

    // 2. Create second account
    BankAccount account2 = new BankAccount("ACC002", "Bob", 3000);
    account2.displayInfo();

    // 3. Create third account
    BankAccount account3 = new BankAccount("ACC003", "Charlie", 2000);
    account3.displayInfo();

    // 4. Access static variable through static method
    System.out.println("\n--- Checking Static Variables ---");
    System.out.println("Total accounts: " + BankAccount.getTotalAccounts());
    System.out.printf("Total deposits: $%.2f\n", BankAccount.getTotalDeposits());

    // 5. Perform transactions
    System.out.println("\n--- Transactions ---");
    account1.deposit(500);
    account2.deposit(1000);
    account3.withdraw(500);

    // 6. Check static variables after transactions
    System.out.println("\n--- After Transactions ---");
    System.out.println("Total accounts: " + BankAccount.getTotalAccounts());
    System.out.printf("Total deposits: $%.2f\n", BankAccount.getTotalDeposits());

    // 7. Test minimum balance constraint
    System.out.println("\n--- Minimum Balance Test ---");
    account2.withdraw(4000); // Should fail - would go below minimum
    account2.withdraw(1500); // Should succeed

    // 8. Display all accounts
    System.out.println("\n--- All Accounts ---");
    account1.displayInfo();
    account2.displayInfo();
    account3.displayInfo();

    // 9. Display statistics (static method)
    BankAccount.displayStatistics();

    // 10. Access static constant
    System.out.println("\nMinimum Balance Requirement: $" + MIN_BALANCE);
  }
}

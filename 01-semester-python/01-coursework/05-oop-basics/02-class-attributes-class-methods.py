"""
Topic: Object-Oriented Programming (OOP) Basics
Sample 2: Class Attributes, Class Methods, and Static Methods

Demonstrates:
- Class attributes vs instance attributes
- Class methods using @classmethod decorator
- Static methods using @staticmethod decorator
- When to use each type of method
- Sharing data across instances
"""


class BankAccount:
    \"\"\"Bank account class demonstrating class vs instance attributes.\"\"\"

    # Class attribute - shared by all instances
    total_accounts = 0
    interest_rate = 0.05  # 5% interest

    def __init__(self, account_holder, initial_balance=0):
        \"\"\"Initialize account with holder name and balance.\"\"\"
        # Instance attributes - unique to each object
        self.account_holder = account_holder
        self.balance = initial_balance

        # Increment class variable
        BankAccount.total_accounts += 1

    def deposit(self, amount):
        \"\"\"Add money to account.\"\"\"
        if amount > 0:
            self.balance += amount
            print(f"Deposited ${amount}. New balance: ${self.balance:.2f}")
        else:
            print("Deposit amount must be positive")

    def withdraw(self, amount):
        \"\"\"Remove money from account.\"\"\"
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew ${amount}. New balance: ${self.balance:.2f}")
        else:
            print("Insufficient funds or invalid amount")

    def apply_interest(self):
        \"\"\"Apply interest to balance using class interest_rate.\"\"\"
        interest = self.balance * BankAccount.interest_rate
        self.balance += interest
        print(f"Interest applied: ${interest:.2f}")

    @classmethod
    def change_interest_rate(cls, new_rate):
        \"\"\"
        Class method to change interest rate for all accounts.
        The first parameter is the class itself (cls), not the instance.
        \"\"\"
        cls.interest_rate = new_rate
        print(f"Interest rate changed to {new_rate * 100}% for all accounts")

    @classmethod
    def from_string(cls, account_data):
        \"\"\"Create account from a string like 'John Doe:1000'.\"\"\"
        name, balance = account_data.split(':')
        return cls(name, float(balance))

    @staticmethod
    def calculate_compound_interest(principal, rate, time):
        \"\"\"
        Static method - doesn't need class or instance context.
        Pure utility function that belongs to the class conceptually.
        \"\"\"
        return principal * (1 + rate) ** time

    def display_info(self):
        \"\"\"Display account information.\"\"\"
        print(f"\nAccount Holder: {self.account_holder}")
        print(f"Balance: ${self.balance:.2f}")
        print(f"Current Interest Rate: {BankAccount.interest_rate * 100}%")

    @classmethod
    def get_total_accounts(cls):
        \"\"\"Class method to get total number of accounts created.\"\"\"
        return cls.total_accounts


def main():
    print("=== Classes: Attributes, Class Methods, and Static Methods ===\n")

    # Create accounts
    account1 = BankAccount("Alice", 1000)
    account2 = BankAccount("Bob", 1500)
    account3 = BankAccount.from_string("Charlie:2000")  # Using class method

    print(f"Total accounts created: {BankAccount.get_total_accounts()}\n")

    # Display initial info
    account1.display_info()
    account2.display_info()

    # Perform transactions
    print("\n--- Transactions ---")
    account1.deposit(500)
    account1.withdraw(200)
    account2.deposit(300)

    # Apply interest
    print("\n--- Applying Interest ---")
    account1.apply_interest()

    # Change interest rate for all accounts (class method)
    print("\n--- Changing Interest Rate (affects all accounts) ---")
    BankAccount.change_interest_rate(0.07)  # 7% for all accounts

    # Calculate compound interest (static method)
    print("\n--- Static Method Example ---")
    principal = 1000
    rate = 0.05
    time = 5
    final_amount = BankAccount.calculate_compound_interest(principal, rate, time)
    print(f"${principal} at {rate*100}% for {time} years = ${final_amount:.2f}")

    # Display final info
    print("\n--- Final Account Information ---")
    account1.display_info()
    account2.display_info()
    account3.display_info()


if __name__ == "__main__":
    main()

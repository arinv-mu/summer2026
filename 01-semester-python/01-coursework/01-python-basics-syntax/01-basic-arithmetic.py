"""
Topic: Python Basics and Syntax
Sample 1: Basic Arithmetic and Variable Operations

Demonstrates:
- Variable declaration and assignment
- Fundamental data types (int, float, str, bool)
- Arithmetic operators (+, -, *, /, //, %, **)
- Input/output with input() and print()
- String formatting and f-strings
"""


def main():
    print("=== Python Arithmetic Calculator ===\n")

    # Get user input (input() always returns a string)
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    # Perform arithmetic operations
    print("\nResults:")
    print(f"{num1} + {num2} = {num1 + num2}")
    print(f"{num1} - {num2} = {num1 - num2}")
    print(f"{num1} * {num2} = {num1 * num2}")

    # Division with error handling
    if num2 != 0:
        print(f"{num1} / {num2} = {num1 / num2:.2f}")
        print(f"{num1} // {num2} = {int(num1 // num2)}")  # Floor division
        print(f"{num1} % {num2} = {num1 % num2:.2f}")  # Modulo
    else:
        print("Cannot divide by zero!")

    # Power operation
    print(f"{num1} ** {num2} = {num1 ** num2}")

    # Boolean expressions
    print(f"\nComparisons:")
    print(f"{num1} > {num2}: {num1 > num2}")
    print(f"{num1} == {num2}: {num1 == num2}")
    print(f"{num1} != {num2}: {num1 != num2}")


if __name__ == "__main__":
    main()

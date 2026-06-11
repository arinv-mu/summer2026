"""
Topic: Python Basics and Syntax
Sample 2: Data Types and Type Conversion

Demonstrates:
- Different data types (int, float, str, bool, None)
- Type checking with type()
- Type conversion and casting
- String methods and operations
- Working with booleans and logical operators
"""


def main():
    print("=== Python Data Types and Conversion ===\n")

    # Integer and Float types
    age = 25  # int type
    height = 5.9  # float type
    temperature = -10  # int can be negative

    print(f"Age: {age}, Type: {type(age)}")
    print(f"Height: {height}, Type: {type(height)}")
    print(f"Temperature: {temperature}, Type: {type(temperature)}\n")

    # String type and operations
    name = "Python"
    greeting = f"Welcome to {name}!"
    print(f"String: {greeting}, Type: {type(greeting)}")
    print(f"Length: {len(greeting)}")
    print(f"Uppercase: {greeting.upper()}")
    print(f"Lowercase: {greeting.lower()}\n")

    # Boolean type
    is_student = True
    is_working = False
    print(f"Is Student: {is_student}, Type: {type(is_student)}")
    print(f"Is Working: {is_working}, Type: {type(is_working)}")

    # Logical operators with booleans
    result = is_student and not is_working
    print(f"Student AND not Working: {result}\n")

    # Type conversion (casting)
    print("Type Conversion Examples:")
    num_string = "42"
    num_int = int(num_string)  # String to int
    print(f"'{num_string}' (str) → {num_int} (int)")

    num_float = float(num_string)  # String to float
    print(f"'{num_string}' (str) → {num_float} (float)")

    number = 123
    num_as_string = str(number)  # Int to string
    print(f"{number} (int) → '{num_as_string}' (str)")

    # Converting to boolean (0/empty = False, non-zero/non-empty = True)
    print(f"\nbool(0): {bool(0)}")
    print(f"bool(1): {bool(1)}")
    print(f"bool(''): {bool('')}")
    print(f"bool('hello'): {bool('hello')}")

    # None type (represents absence of value)
    empty_value = None
    print(f"\nNone value: {empty_value}, Type: {type(empty_value)}")


if __name__ == "__main__":
    main()

"""
Topic: Functions and Scope
Sample 2: Variable Scope, *args, and **kwargs

Demonstrates:
- Local and global variable scope
- nonlocal keyword for nested functions
- *args for variable number of positional arguments
- **kwargs for variable number of keyword arguments
- Scope resolution and best practices
"""

# Global variable
global_count = 0


def local_vs_global():
    """Demonstrates difference between local and global variables."""
    global global_count

    local_var = 10  # Local variable
    global_count += 5  # Modify global variable

    print(f"Local variable: {local_var}")
    print(f"Global variable: {global_count}")


def nested_scope_example():
    """Demonstrates nested function scope with nonlocal."""
    outer_var = 100

    def inner_function():
        nonlocal outer_var
        outer_var += 50
        return outer_var

    result = inner_function()
    print(f"After inner function: {outer_var}")
    return result


def sum_all(*args):
    """
    Function that accepts variable number of positional arguments.
    *args allows passing multiple arguments without naming each one.
    """
    total = 0
    for num in args:
        total += num
    return total


def print_person_info(**kwargs):
    """
    Function that accepts variable number of keyword arguments.
    **kwargs allows flexible key-value pairs.
    """
    print("Person Information:")
    for key, value in kwargs.items():
        print(f"  {key}: {value}")


def flexible_function(*args, **kwargs):
    """Function combining both *args and **kwargs."""
    print(f"Positional arguments: {args}")
    print(f"Keyword arguments: {kwargs}")


def main():
    print("=== Variable Scope and Function Arguments ===\n")

    # Local vs Global scope
    print("1. Local vs Global Variables:")
    local_vs_global()
    print(f"Global count after function: {global_count}\n")

    # Nested scope with nonlocal
    print("2. Nested Function Scope:")
    result = nested_scope_example()
    print(f"Result: {result}\n")

    # *args example
    print("3. Using *args (Variable Positional Arguments):")
    total = sum_all(10, 20, 30, 40)
    print(f"Sum: {total}")

    total = sum_all(5, 15)
    print(f"Sum: {total}\n")

    # **kwargs example
    print("4. Using **kwargs (Variable Keyword Arguments):")
    print_person_info(name="Alice", age=25, city="New York", occupation="Engineer")

    print_person_info(name="Bob", hobby="Reading")
    print()

    # Combined *args and **kwargs
    print("5. Using Both *args and **kwargs:")
    flexible_function(1, 2, 3, name="Test", value=100)


if __name__ == "__main__":
    main()

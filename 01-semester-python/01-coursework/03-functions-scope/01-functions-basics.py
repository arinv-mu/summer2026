"""
Topic: Functions and Scope
Sample 1: Function Definition and Parameters

Demonstrates:
- Function definition and calling
- Parameters and return values
- Default parameters for flexible calling
- Positional and keyword arguments
- Local vs global scope
"""


def greet(name, greeting="Hello"):
    """
    Function with parameters and default values.
    Demonstrates proper docstrings for documentation.
    """
    return f"{greeting}, {name}!"


def add(a, b):
    """Simple function that returns sum of two numbers."""
    return a + b


def calculate_grade(score, max_score=100):
    """Calculate percentage and return grade."""
    percentage = (score / max_score) * 100
    return percentage


def print_student_info(name, age, gpa=3.0):
    """Print student information with optional GPA."""
    print(f"Name: {name}")
    print(f"Age: {age}")
    print(f"GPA: {gpa}")


# Global variable
school_name = "Python Academy"


def get_school_info():
    """Function using global variable."""
    return f"School: {school_name}"


def main():
    print("=== Functions and Parameters ===\n")

    # Simple function calls
    result = greet("Alice")
    print(result)

    result = greet("Bob", greeting="Hi")
    print(result)

    # Function with return value
    sum_result = add(15, 25)
    print(f"\nAddition: 15 + 25 = {sum_result}")

    # Function with default parameter
    percentage = calculate_grade(85)
    print(f"Grade: {percentage:.1f}%")

    # Function with multiple parameters
    print("\nStudent Information:")
    print_student_info("Charlie", 20, gpa=3.8)

    # Calling function with global variable
    print(f"\n{get_school_info()}")

    # Function with variable number of arguments (preview)
    print(f"\nScore 90 is {calculate_grade(90):.1f}%")


if __name__ == "__main__":
    main()

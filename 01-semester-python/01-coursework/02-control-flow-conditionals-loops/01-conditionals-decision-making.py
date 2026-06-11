"""
Topic: Control Flow (Conditionals and Loops)
Sample 1: If-Else Decision Making

Demonstrates:
- if, elif, else conditional statements
- Comparison operators and logical operators
- Nested conditionals for complex logic
- Grade classification based on marks
- Practical decision-making patterns
"""


def main():
    print("=== Grade Classification System ===\n")

    # Get user input with error handling
    try:
        marks = float(input("Enter marks (0-100): "))
    except ValueError:
        print("Error: Please enter a valid number")
        return

    # Validate input range
    if marks < 0 or marks > 100:
        print(f"Warning: Marks should be between 0-100, got {marks}")

    # Grade classification using if-elif-else
    if marks >= 90:
        grade = "A"
        comment = "Excellent"
    elif marks >= 80:
        grade = "B"
        comment = "Very Good"
    elif marks >= 70:
        grade = "C"
        comment = "Good"
    elif marks >= 60:
        grade = "D"
        comment = "Satisfactory"
    elif marks >= 50:
        grade = "E"
        comment = "Pass"
    else:
        grade = "F"
        comment = "Fail"

    print(f"\nMarks: {marks}")
    print(f"Grade: {grade} ({comment})")

    # Additional nested conditional logic
    if marks >= 75:
        print("Status: Pass - You may progress to next level")
        if marks >= 90:
            print("Recognition: Distinction achieved!")
    else:
        print("Status: Below average - Consider additional study")

    # Logical operators in conditionals
    is_excellent = marks >= 90
    is_pass = marks >= 50
    needs_improvement = marks < 60 and marks >= 50

    print(f"\nExcellent performance: {is_excellent}")
    print(f"Passed exam: {is_pass}")
    print(f"Needs improvement: {needs_improvement}")


if __name__ == "__main__":
    main()

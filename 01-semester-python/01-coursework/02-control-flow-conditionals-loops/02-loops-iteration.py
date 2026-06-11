"""
Topic: Control Flow (Conditionals and Loops)
Sample 2: For and While Loops with Control Flow

Demonstrates:
- for loops with range() and iteration
- while loops with condition checking
- break and continue statements
- Loop applications: multiplication tables and summation
- Nested loops for pattern generation
"""


def main():
    print("=== Loop Control and Iteration ===\n")

    # For loop with range()
    print("Multiplication Table (Using for loop):")
    num = int(input("Enter a number: "))
    for i in range(1, 11):
        print(f"{num} × {i} = {num * i}")

    # While loop example
    print("\n=== Sum of Numbers (Using while loop) ===")
    total = 0
    count = 0
    num = 0

    while num != -1:
        try:
            num = int(input("Enter a number (-1 to stop): "))
            if num != -1:
                total += num
                count += 1
        except ValueError:
            print("Invalid input, please enter a number")

    if count > 0:
        print(f"Sum: {total}")
        print(f"Average: {total / count:.2f}")
        print(f"Count: {count}")

    # Break and continue in loops
    print("\n=== Using break and continue ===")
    print("Numbers 1-10 (skip 5, stop at 7):")
    for i in range(1, 11):
        if i == 5:
            continue  # Skip this iteration
        if i == 8:
            break  # Exit the loop
        print(i, end=" ")

    # Nested loops for pattern
    print("\n\n=== Triangle Pattern (Nested loops) ===")
    rows = int(input("Enter number of rows: "))
    for i in range(1, rows + 1):
        for j in range(i):
            print("*", end=" ")
        print()


if __name__ == "__main__":
    main()

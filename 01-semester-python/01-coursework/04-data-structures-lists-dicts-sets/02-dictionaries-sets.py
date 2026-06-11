"""
Topic: Data Structures (Lists, Dicts, Sets)
Sample 2: Dictionaries, Sets, and Dictionary Methods

Demonstrates:
- Dictionary creation, access, and modification
- Dictionary methods (keys(), values(), items(), get())
- Set creation and operations (union, intersection, difference)
- When to use dictionaries vs lists vs sets
- Iterating through complex data structures
"""


def main():
    print("=== Dictionaries, Sets, and Data Structure Methods ===\n")

    # Dictionary creation and access
    print("1. Dictionary Operations:")
    student = {
        "name": "Alice",
        "age": 20,
        "gpa": 3.8,
        "major": "Computer Science"
    }
    print(f"Student: {student}")
    print(f"Name: {student['name']}")
    print(f"GPA: {student['gpa']}\n")

    # Dictionary methods
    print("2. Dictionary Methods:")
    print(f"Keys: {student.keys()}")
    print(f"Values: {student.values()}")
    print(f"Items: {student.items()}\n")

    # Safe access with get()
    print(f"Email (using get): {student.get('email', 'Not provided')}")
    print(f"Major (using get): {student.get('major', 'Not specified')}\n")

    # Modifying dictionaries
    print("3. Modifying Dictionaries:")
    student['email'] = "alice@university.edu"  # Add new key
    student['age'] = 21  # Update existing key
    print(f"Updated student: {student}")

    # Dictionary with multiple students
    print("\n4. Storing Multiple Objects:")
    students = {
        "alice": {"age": 20, "gpa": 3.8},
        "bob": {"age": 21, "gpa": 3.5},
        "charlie": {"age": 19, "gpa": 3.9}
    }
    print(f"Alice's GPA: {students['alice']['gpa']}")

    # Iterating through dictionaries
    print("\nAll Students:")
    for name, info in students.items():
        print(f"  {name}: Age={info['age']}, GPA={info['gpa']}")

    # Sets
    print("\n5. Set Operations:")
    set_a = {1, 2, 3, 4, 5}
    set_b = {4, 5, 6, 7, 8}

    print(f"Set A: {set_a}")
    print(f"Set B: {set_b}")
    print(f"Union: {set_a | set_b}")  # All elements from both sets
    print(f"Intersection: {set_a & set_b}")  # Common elements
    print(f"Difference: {set_a - set_b}")  # Elements in A but not in B
    print(f"Symmetric difference: {set_a ^ set_b}")  # Elements in either but not both

    # Removing duplicates with sets
    print("\n6. Removing Duplicates with Sets:")
    numbers_with_duplicates = [1, 2, 2, 3, 3, 3, 4, 5, 5]
    unique = list(set(numbers_with_duplicates))
    print(f"Original: {numbers_with_duplicates}")
    print(f"Unique: {sorted(unique)}")


if __name__ == "__main__":
    main()

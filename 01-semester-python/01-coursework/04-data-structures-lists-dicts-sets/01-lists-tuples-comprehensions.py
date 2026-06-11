"""
Topic: Data Structures (Lists, Dicts, Sets)
Sample 1: Lists, Tuples, and List Comprehensions

Demonstrates:
- List creation, indexing, and slicing
- List methods (append, remove, pop, sort, extend)
- Tuple immutability and usage
- List comprehensions for concise list creation
- Common list operations and patterns
"""


def main():
    print("=== Lists, Tuples, and List Comprehensions ===\n")

    # List creation and basic operations
    print("1. List Operations:")
    numbers = [45, 23, 78, 12, 56, 34, 89, 5]
    print(f"Original list: {numbers}")

    # Indexing and slicing
    print(f"First element: {numbers[0]}")
    print(f"Last element: {numbers[-1]}")
    print(f"Slice [2:5]: {numbers[2:5]}")
    print(f"Every other element: {numbers[::2]}\n")

    # List methods
    print("2. List Methods:")
    fruits = ["apple", "banana"]
    fruits.append("cherry")  # Add single element
    print(f"After append: {fruits}")

    fruits.extend(["date", "elderberry"])  # Add multiple elements
    print(f"After extend: {fruits}")

    fruits.remove("banana")  # Remove by value
    print(f"After remove: {fruits}")

    # Sorting
    unsorted = [64, 34, 25, 12, 22, 11, 90]
    unsorted.sort()
    print(f"Sorted: {unsorted}\n")

    # Tuples (immutable sequences)
    print("3. Tuples (Immutable):")
    coordinates = (10, 20)
    print(f"Tuple: {coordinates}")
    print(f"x-coordinate: {coordinates[0]}")
    print(f"y-coordinate: {coordinates[1]}")
    # coordinates[0] = 15  # This would raise an error - tuples are immutable

    # Unpacking
    x, y = coordinates
    print(f"Unpacked: x={x}, y={y}\n")

    # List comprehensions
    print("4. List Comprehensions:")
    squares = [x**2 for x in range(1, 6)]
    print(f"Squares 1-5: {squares}")

    even_numbers = [x for x in numbers if x % 2 == 0]
    print(f"Even numbers: {even_numbers}")

    doubled = [x * 2 for x in range(5)]
    print(f"Doubled (0-4): {doubled}\n")

    # Finding min, max, and sum
    print("5. Built-in Functions:")
    data = [45, 23, 78, 12, 56]
    print(f"Min: {min(data)}")
    print(f"Max: {max(data)}")
    print(f"Sum: {sum(data)}")
    print(f"Length: {len(data)}")


if __name__ == "__main__":
    main()

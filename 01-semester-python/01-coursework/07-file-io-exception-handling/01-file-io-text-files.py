"""
Topic: File I/O and Exception Handling
Sample 1: Reading and Writing Text Files

Demonstrates:
- Opening and closing files with open()
- Context managers (with statement) for safe file handling
- Reading files (read, readline, readlines)
- Writing to files (write, writelines)
- Appending to files
- Exception handling with try-except blocks
"""


def write_student_data():
    \"\"\"Write student data to a text file.\"\"\"
    try:
        with open("students.txt", "w") as file:
            file.write("Student Name,Age,GPA\\n")
            file.write("Alice,20,3.8\\n")
            file.write("Bob,21,3.5\\n")
            file.write("Charlie,19,3.9\\n")
        print("Student data written to students.txt")
    except IOError as e:
        print(f"Error writing to file: {e}")


def read_student_data():
    \"\"\"Read and display student data from file.\"\"\"
    try:
        with open("students.txt", "r") as file:
            content = file.read()
            print("File contents:")
            print(content)
    except FileNotFoundError:
        print("File not found!")
    except IOError as e:
        print(f"Error reading file: {e}")


def read_line_by_line():
    \"\"\"Read file line by line.\"\"\"
    try:
        with open("students.txt", "r") as file:
            print("\\nReading line by line:")
            for line_num, line in enumerate(file, 1):
                print(f"Line {line_num}: {line.strip()}")
    except FileNotFoundError:
        print("File not found!")


def append_to_file():
    \"\"\"Append new data to existing file.\"\"\"
    try:
        with open("students.txt", "a") as file:
            file.write("Diana,20,3.7\\n")
        print("\\nNew student appended to file")
    except IOError as e:
        print(f"Error appending to file: {e}")


def process_grades():
    \"\"\"Process student grades with error handling.\"\"\"
    try:
        grades = {"Math": 85, "Science": 92, "English": 88}

        # Create a grades file
        with open("grades.txt", "w") as file:
            for subject, grade in grades.items():
                if grade < 0 or grade > 100:
                    raise ValueError(f"Invalid grade: {grade}")
                file.write(f"{subject}: {grade}%\\n")

        print("\\nGrade file created successfully")

        # Read and calculate average
        total = 0
        count = 0
        with open("grades.txt", "r") as file:
            for line in file:
                parts = line.strip().split(": ")
                if len(parts) == 2:
                    grade = int(parts[1].rstrip('%'))
                    total += grade
                    count += 1

        if count > 0:
            average = total / count
            print(f"Average grade: {average:.1f}%")

    except FileNotFoundError:
        print("File not found!")
    except ValueError as e:
        print(f"Value error: {e}")
    except Exception as e:
        print(f"Unexpected error: {e}")


def main():
    print("=== File I/O and Exception Handling ===\\n")

    # Write data
    write_student_data()

    # Read data
    read_student_data()

    # Read line by line
    read_line_by_line()

    # Append data
    append_to_file()

    # Process grades with error handling
    process_grades()

    print("\\n=== File I/O completed successfully ===")


if __name__ == "__main__":
    main()

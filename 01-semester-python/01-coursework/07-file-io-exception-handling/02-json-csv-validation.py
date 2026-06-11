"""
Topic: File I/O and Exception Handling
Sample 2: JSON and CSV File Handling with Exception Handling

Demonstrates:
- Working with JSON files (json.load, json.dump)
- Working with CSV files (csv.reader, csv.writer)
- Custom exception classes
- Exception handling best practices
- Logging errors and validation
"""

import json
import csv
from pathlib import Path


class InvalidDataError(Exception):
    \"\"\"Custom exception for invalid data.\"\"\"
    pass


def write_student_json():
    \"\"\"Write student data to JSON file.\"\"\"
    try:
        students = [
            {"name": "Alice", "id": 101, "gpa": 3.8},
            {"name": "Bob", "id": 102, "gpa": 3.5},
            {"name": "Charlie", "id": 103, "gpa": 3.9}
        ]

        with open("students.json", "w") as file:
            json.dump(students, file, indent=2)
        print("Student data written to students.json")
        return True

    except IOError as e:
        print(f"IO Error writing JSON: {e}")
        return False
    except Exception as e:
        print(f"Unexpected error: {e}")
        return False


def read_student_json():
    \"\"\"Read and process student data from JSON file.\"\"\"
    try:
        with open("students.json", "r") as file:
            students = json.load(file)

        print("\\nStudents from JSON file:")
        for student in students:
            print(f"  {student['name']} (ID: {student['id']}) - GPA: {student['gpa']}")

        return students

    except FileNotFoundError:
        print("JSON file not found!")
        return None
    except json.JSONDecodeError as e:
        print(f"JSON decode error: {e}")
        return None


def write_to_csv():
    \"\"\"Write data to CSV file.\"\"\"
    try:
        data = [
            ["Name", "Age", "Major"],
            ["Alice", "20", "Computer Science"],
            ["Bob", "21", "Mathematics"],
            ["Charlie", "19", "Physics"]
        ]

        with open("students.csv", "w", newline='') as file:
            writer = csv.writer(file)
            writer.writerows(data)
        print("\\nData written to students.csv")
        return True

    except IOError as e:
        print(f"Error writing CSV: {e}")
        return False


def read_from_csv():
    \"\"\"Read data from CSV file.\"\"\"
    try:
        with open("students.csv", "r") as file:
            reader = csv.reader(file)
            print("\\nCSV Data:")
            for row in reader:
                print(f"  {' | '.join(row)}")

    except FileNotFoundError:
        print("CSV file not found!")
    except csv.Error as e:
        print(f"CSV error: {e}")


def read_csv_as_dicts():
    \"\"\"Read CSV with header as list of dictionaries.\"\"\"
    try:
        with open("students.csv", "r") as file:
            reader = csv.DictReader(file)
            print("\\nCSV as dictionaries:")
            for row in reader:
                print(f"  {row}")

    except FileNotFoundError:
        print("CSV file not found!")
    except csv.Error as e:
        print(f"CSV error: {e}")


def validate_student_data(student):
    \"\"\"Validate student data with custom exception.\"\"\"
    if not isinstance(student.get('name'), str) or not student['name']:
        raise InvalidDataError("Name must be a non-empty string")

    if not isinstance(student.get('gpa'), (int, float)) or not (0 <= student['gpa'] <= 4.0):
        raise InvalidDataError("GPA must be between 0 and 4.0")

    return True


def process_student_data_safely():
    \"\"\"Process student data with comprehensive error handling.\"\"\"
    try:
        test_students = [
            {"name": "Alice", "gpa": 3.8},
            {"name": "Bob", "gpa": 3.5},
            {"name": "", "gpa": 3.9}  # Invalid data
        ]

        print("\\nValidating student data:")
        for student in test_students:
            try:
                if validate_student_data(student):
                    print(f"  ✓ {student['name']}: Valid")
            except InvalidDataError as e:
                print(f"  ✗ Validation error: {e}")
            except Exception as e:
                print(f"  ✗ Unexpected error: {e}")

    except Exception as e:
        print(f"Error processing data: {e}")


def main():
    print("=== JSON and CSV File Handling ===\\n")

    # JSON operations
    write_student_json()
    read_student_json()

    # CSV operations
    write_to_csv()
    read_from_csv()
    read_csv_as_dicts()

    # Data validation
    process_student_data_safely()

    print("\\n=== File I/O operations completed ===")


if __name__ == "__main__":
    main()

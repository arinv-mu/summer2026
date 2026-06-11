"""
Topic: Object-Oriented Programming (OOP) Basics
Sample 1: Classes, Objects, and Methods

Demonstrates:
- Class definition and object creation
- __init__ (constructor) method
- Instance attributes and methods
- self parameter for instance context
- Creating and using multiple instances
"""


class Student:
    \"\"\"A class to represent a student.\"\"\"

    def __init__(self, name, student_id, gpa=0.0):
        \"\"\"
        Initialize student with name, ID, and optional GPA.

        Args:
            name: Student's full name
            student_id: Unique student identifier
            gpa: Grade point average (default 0.0)
        \"\"\"
        self.name = name
        self.student_id = student_id
        self.gpa = gpa
        self.courses = []  # List to store enrolled courses

    def enroll_course(self, course_name):
        \"\"\"Add a course to student's enrollment.\"\"\"
        if course_name not in self.courses:
            self.courses.append(course_name)
            print(f"{self.name} enrolled in {course_name}")
        else:
            print(f"{self.name} is already enrolled in {course_name}")

    def update_gpa(self, new_gpa):
        \"\"\"Update student's GPA.\"\"\"
        if 0 <= new_gpa <= 4.0:
            self.gpa = new_gpa
            print(f"{self.name}'s GPA updated to {new_gpa}")
        else:
            print("GPA must be between 0 and 4.0")

    def display_info(self):
        \"\"\"Display student information.\"\"\"
        print(f"\nStudent: {self.name}")
        print(f"ID: {self.student_id}")
        print(f"GPA: {self.gpa}")
        print(f"Courses: {', '.join(self.courses) if self.courses else 'None'}")

    def get_description(self):
        \"\"\"Return string description of student.\"\"\"
        return f"{self.name} (ID: {self.student_id}) - GPA: {self.gpa}"


def main():
    print("=== Object-Oriented Programming Basics ===\n")

    # Create objects (instances of Student class)
    student1 = Student("Alice", "S001", 3.8)
    student2 = Student("Bob", "S002", 3.5)
    student3 = Student("Charlie", "S003")  # GPA will be 0.0

    print("Created three student objects\n")

    # Call methods on objects
    student1.enroll_course("Python Basics")
    student1.enroll_course("Data Structures")
    student2.enroll_course("Python Basics")
    student3.enroll_course("Web Development")
    print()

    # Update GPA
    student3.update_gpa(3.2)
    print()

    # Display information
    student1.display_info()
    student2.display_info()
    student3.display_info()

    # Get and print descriptions
    print("\n--- Student Descriptions ---")
    for student in [student1, student2, student3]:
        print(student.get_description())

    # Accessing attributes directly
    print(f"\n{student1.name}'s current GPA: {student1.gpa}")


if __name__ == "__main__":
    main()

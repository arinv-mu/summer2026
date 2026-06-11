/**
 * Topic: OOP Basics (Classes & Constructors)
 * Sample 1: Class Fundamentals
 *
 * Demonstrates:
 * - Class definition with instance variables
 * - Constructor (with and without parameters)
 * - Instance methods
 * - Accessing instance variables
 * - The this keyword
 * - Creating multiple objects
 */

public class Student {
  // Instance variables
  private String name;
  private int studentId;
  private double gpa;

  // Constructor 1: No-argument constructor
  public Student() {
    this.name = "Unknown";
    this.studentId = 0;
    this.gpa = 0.0;
  }

  // Constructor 2: With parameters (overloading)
  public Student(String name, int studentId, double gpa) {
    this.name = name;
    this.studentId = studentId;
    this.gpa = gpa;
  }

  // Getter for name
  public String getName() {
    return this.name;
  }

  // Setter for name
  public void setName(String name) {
    this.name = name;
  }

  // Getter for student ID
  public int getStudentId() {
    return this.studentId;
  }

  // Getter for GPA
  public double getGpa() {
    return this.gpa;
  }

  // Setter for GPA with validation
  public void setGpa(double gpa) {
    if (gpa >= 0 && gpa <= 4.0) {
      this.gpa = gpa;
    } else {
      System.out.println("Error: GPA must be between 0 and 4.0");
    }
  }

  // Instance method to display student info
  public void displayInfo() {
    System.out.println("Student Info:");
    System.out.println("  Name: " + this.name);
    System.out.println("  ID: " + this.studentId);
    System.out.printf("  GPA: %.2f\n", this.gpa);
  }

  // Instance method to get grade based on GPA
  public String getGrade() {
    if (this.gpa >= 3.7) {
      return "A";
    } else if (this.gpa >= 3.3) {
      return "B+";
    } else if (this.gpa >= 3.0) {
      return "B";
    } else if (this.gpa >= 2.7) {
      return "C+";
    } else if (this.gpa >= 2.0) {
      return "C";
    } else {
      return "Below C";
    }
  }

  // Static counter to track total students (not in this basic example)
  public static void main(String[] args) {
    System.out.println("=== OOP Basics: Classes and Constructors ===\n");

    // 1. Create student using no-argument constructor
    System.out.println("--- Creating Students ---");
    Student student1 = new Student();
    System.out.println("Student 1 created: " + student1.getName());

    // 2. Create student with parameters
    Student student2 = new Student("Alice", 101, 3.8);
    System.out.println("Student 2 created: " + student2.getName());

    Student student3 = new Student("Bob", 102, 3.5);
    Student student4 = new Student("Charlie", 103, 3.9);

    // 3. Display student information
    System.out.println("\n--- Student Information ---");
    student2.displayInfo();
    student3.displayInfo();

    // 4. Access instance variables using getters
    System.out.println("\n--- Using Getters ---");
    System.out.println("Student 2 Name: " + student2.getName());
    System.out.println("Student 2 ID: " + student2.getStudentId());
    System.out.println("Student 2 GPA: " + student2.getGpa());

    // 5. Modify instance variables using setters
    System.out.println("\n--- Using Setters ---");
    student1.setName("Diana");
    student1.setGpa(3.7);
    student1.displayInfo();

    // 6. Get grade based on GPA
    System.out.println("\n--- Grade Assignment ---");
    System.out.println(student2.getName() + "'s Grade: " + student2.getGrade());
    System.out.println(student3.getName() + "'s Grade: " + student3.getGrade());
    System.out.println(student4.getName() + "'s Grade: " + student4.getGrade());

    // 7. Attempt invalid GPA
    System.out.println("\n--- Validation Test ---");
    student2.setGpa(4.5); // Should show error
    System.out.println("Student 2 GPA after invalid attempt: " + student2.getGpa());

    // 8. Array of students
    System.out.println("\n--- Array of Students ---");
    Student[] students = { student2, student3, student4 };
    double totalGpa = 0;

    for (Student s : students) {
      totalGpa += s.getGpa();
    }

    double averageGpa = totalGpa / students.length;
    System.out.printf("Average GPA: %.2f\n", averageGpa);
  }
}


/**
 * Topic: Collections Framework
 * Sample 2: HashMap and HashSet
 *
 * Demonstrates:
 * - HashMap for key-value pairs
 * - HashSet for unique elements
 * - Iteration through collections
 * - Put, get, remove operations
 * - Set operations (union, intersection)
 */

import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

public class HashMapHashSetDemo {
  public static void main(String[] args) {
    System.out.println("=== Collections: HashMap and HashSet ===\n");

    // 1. Create HashMap for student grades
    System.out.println("--- HashMap: Student Grades ---");
    HashMap<String, Double> studentGrades = new HashMap<>();

    // 2. Add key-value pairs
    System.out.println("\nAdding students:");
    studentGrades.put("Alice", 3.8);
    studentGrades.put("Bob", 3.5);
    studentGrades.put("Charlie", 3.9);
    studentGrades.put("Diana", 3.7);

    System.out.println("Student grades: " + studentGrades);

    // 3. Get value by key
    System.out.println("\n--- Accessing Values ---");
    System.out.println("Alice's GPA: " + studentGrades.get("Alice"));
    System.out.println("Bob's GPA: " + studentGrades.get("Bob"));

    // 4. Check if key exists
    System.out.println("\n--- Checking Keys ---");
    System.out.println("Contains Alice: " + studentGrades.containsKey("Alice"));
    System.out.println("Contains Eve: " + studentGrades.containsKey("Eve"));

    // 5. Check if value exists
    System.out.println("\nContains GPA 3.8: " + studentGrades.containsValue(3.8));
    System.out.println("Contains GPA 4.0: " + studentGrades.containsValue(4.0));

    // 6. Get all keys
    System.out.println("\n--- Keys ---");
    Set<String> keys = studentGrades.keySet();
    System.out.println("Keys: " + keys);

    // 7. Get all values
    System.out.println("\n--- Values ---");
    System.out.println("GPAs: " + studentGrades.values());

    // 8. Iterate through HashMap
    System.out.println("\n--- Iteration (entrySet) ---");
    for (var entry : studentGrades.entrySet()) {
      System.out.println(entry.getKey() + " -> " + entry.getValue());
    }

    // 9. Update value
    System.out.println("\n--- Updating Values ---");
    studentGrades.put("Alice", 3.9);
    System.out.println("Alice's new GPA: " + studentGrades.get("Alice"));

    // 10. Remove entry
    System.out.println("\n--- Removing Entries ---");
    studentGrades.remove("Bob");
    System.out.println("After removing Bob: " + studentGrades);

    // 11. HashMap size
    System.out.println("Size: " + studentGrades.size());

    // 12. Create HashSet for unique numbers
    System.out.println("\n--- HashSet: Unique Numbers ---");
    HashSet<Integer> numbers = new HashSet<>();

    // 13. Add elements to HashSet
    System.out.println("\nAdding numbers:");
    numbers.add(10);
    numbers.add(20);
    numbers.add(30);
    numbers.add(20); // Duplicate - will not be added
    numbers.add(40);
    numbers.add(10); // Duplicate - will not be added

    System.out.println("Unique numbers: " + numbers);
    System.out.println("Size: " + numbers.size());

    // 14. Check if element exists in set
    System.out.println("\n--- Checking Elements in Set ---");
    System.out.println("Contains 20: " + numbers.contains(20));
    System.out.println("Contains 50: " + numbers.contains(50));

    // 15. Remove from set
    System.out.println("\n--- Removing from Set ---");
    numbers.remove(20);
    System.out.println("After removing 20: " + numbers);

    // 16. Set operations - Union
    System.out.println("\n--- Set Operations ---");
    HashSet<Integer> set1 = new HashSet<>();
    set1.add(1);
    set1.add(2);
    set1.add(3);

    HashSet<Integer> set2 = new HashSet<>();
    set2.add(3);
    set2.add(4);
    set2.add(5);

    System.out.println("Set 1: " + set1);
    System.out.println("Set 2: " + set2);

    // 17. Union
    HashSet<Integer> union = new HashSet<>(set1);
    union.addAll(set2);
    System.out.println("Union: " + union);

    // 18. Intersection
    HashSet<Integer> intersection = new HashSet<>(set1);
    intersection.retainAll(set2);
    System.out.println("Intersection: " + intersection);

    // 19. Difference
    HashSet<Integer> difference = new HashSet<>(set1);
    difference.removeAll(set2);
    System.out.println("Difference (Set1 - Set2): " + difference);
  }
}

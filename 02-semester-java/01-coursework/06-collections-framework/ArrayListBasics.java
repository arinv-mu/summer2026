
/**
 * Topic: Collections Framework
 * Sample 1: ArrayList and Basic Collections
 *
 * Demonstrates:
 * - ArrayList for dynamic arrays
 * - Add, remove, and access elements
 * - Iterate through collections
 * - Sorting and searching
 * - Collections utility methods
 */

import java.util.ArrayList;
import java.util.Collections;

public class ArrayListBasics {
  public static void main(String[] args) {
    System.out.println("=== Collections Framework: ArrayList ===\n");

    // 1. Create ArrayList of Strings
    System.out.println("--- Creating ArrayList ---");
    ArrayList<String> fruits = new ArrayList<>();

    // 2. Add elements
    System.out.println("\n--- Adding Elements ---");
    fruits.add("Apple");
    fruits.add("Banana");
    fruits.add("Orange");
    fruits.add("Mango");
    fruits.add("Grapes");

    System.out.println("Fruits list: " + fruits);
    System.out.println("Size: " + fruits.size());

    // 3. Access elements by index
    System.out.println("\n--- Accessing Elements ---");
    System.out.println("First fruit: " + fruits.get(0));
    System.out.println("Last fruit: " + fruits.get(fruits.size() - 1));

    // 4. Iterate using for loop
    System.out.println("\n--- Iteration (for loop) ---");
    for (int i = 0; i < fruits.size(); i++) {
      System.out.println((i + 1) + ". " + fruits.get(i));
    }

    // 5. Iterate using enhanced for loop
    System.out.println("\n--- Iteration (enhanced for) ---");
    for (String fruit : fruits) {
      System.out.println("- " + fruit);
    }

    // 6. Check if element exists
    System.out.println("\n--- Checking Elements ---");
    System.out.println("Contains 'Apple': " + fruits.contains("Apple"));
    System.out.println("Contains 'Pear': " + fruits.contains("Pear"));

    // 7. Find index of element
    System.out.println("Index of 'Banana': " + fruits.indexOf("Banana"));

    // 8. Remove elements
    System.out.println("\n--- Removing Elements ---");
    fruits.remove("Grapes");
    System.out.println("After removing 'Grapes': " + fruits);

    fruits.remove(0); // Remove by index
    System.out.println("After removing first element: " + fruits);

    // 9. Sort elements
    System.out.println("\n--- Sorting ---");
    Collections.sort(fruits);
    System.out.println("Sorted: " + fruits);

    // 10. Reverse order
    System.out.println("\n--- Reversing ---");
    Collections.reverse(fruits);
    System.out.println("Reversed: " + fruits);

    // 11. ArrayList of integers
    System.out.println("\n--- ArrayList of Integers ---");
    ArrayList<Integer> numbers = new ArrayList<>();
    numbers.add(45);
    numbers.add(23);
    numbers.add(89);
    numbers.add(12);
    numbers.add(56);

    System.out.println("Numbers: " + numbers);
    Collections.sort(numbers);
    System.out.println("Sorted: " + numbers);

    // 12. Find min and max
    System.out.println("Min: " + Collections.min(numbers));
    System.out.println("Max: " + Collections.max(numbers));

    // 13. Clear all elements
    System.out.println("\n--- Clearing List ---");
    System.out.println("Before clear - Size: " + fruits.size());
    fruits.clear();
    System.out.println("After clear - Size: " + fruits.size());
    System.out.println("Is empty: " + fruits.isEmpty());
  }
}

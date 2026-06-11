
/**
 * Topic: Streams API & Functional Programming
 * Sample 2: Advanced Stream Operations
 *
 * Demonstrates:
 * - Reduce operations
 * - FlatMap
 * - Lambda expressions
 * - Terminal operations (sum, average, max, min)
 * - Grouping and collecting
 */

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class AdvancedStreamsDemo {
  static class Product {
    String name;
    double price;

    Product(String name, double price) {
      this.name = name;
      this.price = price;
    }

    @Override
    public String toString() {
      return name + "($" + price + ")";
    }
  }

  public static void main(String[] args) {
    System.out.println("=== Advanced Streams API ===\n");

    // 1. Create list of products
    System.out.println("--- Product List ---");
    List<Product> products = new ArrayList<>();
    products.add(new Product("Laptop", 1200));
    products.add(new Product("Phone", 800));
    products.add(new Product("Tablet", 500));
    products.add(new Product("Headphones", 150));
    products.add(new Product("Monitor", 400));

    System.out.println("Products: " + products);

    // 2. Sum using reduce
    System.out.println("\n--- Reduce: Total Price ---");
    double totalPrice = products.stream()
        .map(p -> p.price)
        .reduce(0.0, Double::sum);

    System.out.println("Total price: $" + totalPrice);

    // 3. Find average price
    System.out.println("\n--- Average Price ---");
    double averagePrice = products.stream()
        .map(p -> p.price)
        .mapToDouble(Double::doubleValue)
        .average()
        .orElse(0.0);

    System.out.println("Average price: $" + String.format("%.2f", averagePrice));

    // 4. Find max and min
    System.out.println("\n--- Max and Min Prices ---");
    double maxPrice = products.stream()
        .map(p -> p.price)
        .mapToDouble(Double::doubleValue)
        .max()
        .orElse(0.0);

    double minPrice = products.stream()
        .map(p -> p.price)
        .mapToDouble(Double::doubleValue)
        .min()
        .orElse(0.0);

    System.out.println("Max price: $" + maxPrice);
    System.out.println("Min price: $" + minPrice);

    // 5. Filter products by price range
    System.out.println("\n--- Products in Price Range ($400-$1000) ---");
    products.stream()
        .filter(p -> p.price >= 400 && p.price <= 1000)
        .map(p -> p.name)
        .forEach(System.out::println);

    // 6. Group by price category
    System.out.println("\n--- Group by Price Category ---");
    System.out.println("Expensive (>= $500):");
    products.stream()
        .filter(p -> p.price >= 500)
        .map(p -> p.name)
        .forEach(name -> System.out.println("  " + name));

    System.out.println("Budget (< $500):");
    products.stream()
        .filter(p -> p.price < 500)
        .map(p -> p.name)
        .forEach(name -> System.out.println("  " + name));

    // 7. Sort by price
    System.out.println("\n--- Sorted by Price (Low to High) ---");
    products.stream()
        .sorted((p1, p2) -> Double.compare(p1.price, p2.price))
        .forEach(p -> System.out.println("  " + p.name + ": $" + p.price));

    // 8. Sort by name
    System.out.println("\n--- Sorted by Name ---");
    products.stream()
        .sorted((p1, p2) -> p1.name.compareTo(p2.name))
        .forEach(p -> System.out.println("  " + p.name));

    // 9. Check if any product is expensive
    System.out.println("\n--- Any Match ---");
    boolean hasExpensive = products.stream()
        .anyMatch(p -> p.price > 1000);

    System.out.println("Has product > $1000: " + hasExpensive);

    // 10. Check if all products are below 2000
    System.out.println("\n--- All Match ---");
    boolean allAffordable = products.stream()
        .allMatch(p -> p.price < 2000);

    System.out.println("All products < $2000: " + allAffordable);

    // 11. List of numbers - reduce example
    System.out.println("\n--- Reduce on Numbers ---");
    List<Integer> numbers = new ArrayList<>();
    for (int i = 1; i <= 5; i++) {
      numbers.add(i);
    }

    int product_result = numbers.stream()
        .reduce(1, (a, b) -> a * b);

    System.out.println("Numbers: " + numbers);
    System.out.println("Product (1*2*3*4*5): " + product_result);

    // 12. Count products in each category
    System.out.println("\n--- Count by Category ---");
    long expensiveCount = products.stream()
        .filter(p -> p.price >= 500)
        .count();

    System.out.println("Expensive products: " + expensiveCount);
    System.out.println("Budget products: " + (products.size() - expensiveCount));

    // 13. Distinct prices
    System.out.println("\n--- Distinct Prices ---");
    List<Double> prices = new ArrayList<>();
    prices.add(100.0);
    prices.add(200.0);
    prices.add(100.0);
    prices.add(300.0);
    prices.add(200.0);

    System.out.println("Original prices: " + prices);
    System.out.println("Distinct prices: " +
        prices.stream()
            .distinct()
            .collect(Collectors.toList()));
  }
}

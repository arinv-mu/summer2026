/**
 * Topic: Inheritance & Polymorphism
 * Sample 1: Inheritance Basics
 *
 * Demonstrates:
 * - Parent and child class relationship
 * - Extends keyword
 * - Constructor chaining with super()
 * - Method overriding
 * - Polymorphic behavior
 * - is-a relationship
 */

// Parent class
public class Animal {
  protected String name;
  protected int age;

  // Constructor
  public Animal(String name, int age) {
    this.name = name;
    this.age = age;
  }

  // Instance method
  public void eat() {
    System.out.println(this.name + " is eating.");
  }

  // Method to override
  public void makeSound() {
    System.out.println(this.name + " makes a sound.");
  }

  // Method to display info
  public void displayInfo() {
    System.out.printf("%s is %d years old.\n", this.name, this.age);
  }
}

// Child class 1
class Dog extends Animal {
  private String breed;

  // Constructor with super()
  public Dog(String name, int age, String breed) {
    super(name, age); // Call parent constructor
    this.breed = breed;
  }

  // Override parent method
  @Override
  public void makeSound() {
    System.out.println(this.name + " barks: Woof! Woof!");
  }

  // Override eat method
  @Override
  public void eat() {
    System.out.println(this.name + " is eating dog food.");
  }

  // Child-specific method
  public void fetch() {
    System.out.println(this.name + " fetches the ball!");
  }

  // Override displayInfo
  @Override
  public void displayInfo() {
    super.displayInfo();
    System.out.println("  Breed: " + this.breed);
  }
}

// Child class 2
class Cat extends Animal {
  private boolean isIndoor;

  // Constructor
  public Cat(String name, int age, boolean isIndoor) {
    super(name, age);
    this.isIndoor = isIndoor;
  }

  // Override parent method
  @Override
  public void makeSound() {
    System.out.println(this.name + " meows: Meow! Meow!");
  }

  // Override eat method
  @Override
  public void eat() {
    System.out.println(this.name + " is eating cat food.");
  }

  // Child-specific method
  public void scratch() {
    System.out.println(this.name + " scratches the furniture!");
  }

  // Override displayInfo
  @Override
  public void displayInfo() {
    super.displayInfo();
    String location = isIndoor ? "indoor" : "outdoor";
    System.out.println("  Type: " + location + " cat");
  }
}

// Child class 3
class Bird extends Animal {
  private double wingspan;

  // Constructor
  public Bird(String name, int age, double wingspan) {
    super(name, age);
    this.wingspan = wingspan;
  }

  // Override parent method
  @Override
  public void makeSound() {
    System.out.println(this.name + " chirps: Tweet! Tweet!");
  }

  // Child-specific method
  public void fly() {
    System.out.println(this.name + " is flying!");
  }

  // Override displayInfo
  @Override
  public void displayInfo() {
    super.displayInfo();
    System.out.printf("  Wingspan: %.1f inches\n", this.wingspan);
  }
}

// Main class to demonstrate inheritance
public class InheritanceDemo {
  public static void main(String[] args) {
    System.out.println("=== Inheritance & Polymorphism ===\n");

    // 1. Create different animal objects
    System.out.println("--- Creating Animals ---");
    Dog dog = new Dog("Buddy", 3, "Golden Retriever");
    Cat cat = new Cat("Whiskers", 5, true);
    Bird bird = new Bird("Tweety", 2, 10.5);

    // 2. Display information using overridden methods
    System.out.println("\n--- Animal Information ---");
    dog.displayInfo();
    System.out.println();
    cat.displayInfo();
    System.out.println();
    bird.displayInfo();

    // 3. Demonstrate polymorphism - calling overridden methods
    System.out.println("\n--- Making Sounds (Polymorphism) ---");
    dog.makeSound();
    cat.makeSound();
    bird.makeSound();

    // 4. Demonstrate polymorphism with array of parent type
    System.out.println("\n--- Animals Array (Polymorphism) ---");
    Animal[] animals = { dog, cat, bird };

    for (Animal animal : animals) {
      animal.makeSound();
      animal.eat();
    }

    // 5. Call child-specific methods
    System.out.println("\n--- Child-Specific Methods ---");
    dog.fetch();
    cat.scratch();
    bird.fly();

    // 6. Instanceof check
    System.out.println("\n--- Type Checking ---");
    for (Animal animal : animals) {
      if (animal instanceof Dog) {
        System.out.println(animal.name + " is a Dog");
        ((Dog) animal).fetch();
      } else if (animal instanceof Cat) {
        System.out.println(animal.name + " is a Cat");
        ((Cat) animal).scratch();
      } else if (animal instanceof Bird) {
        System.out.println(animal.name + " is a Bird");
        ((Bird) animal).fly();
      }
    }

    // 7. Call parent methods
    System.out.println("\n--- Parent Class Methods ---");
    dog.eat();
    cat.eat();
    bird.eat();
  }
}

"""
Topic: OOP Advanced (Inheritance and Polymorphism)
Sample 1: Inheritance and Method Overriding

Demonstrates:
- Creating parent (base) class and child (derived) classes
- Inheritance to reuse code across classes
- Method overriding in child classes
- Using super() to call parent methods
- Extending parent functionality in child classes
"""


class Animal:
    \"\"\"Parent class representing a generic animal.\"\"\"

    def __init__(self, name, age):
        \"\"\"Initialize animal with name and age.\"\"\"
        self.name = name
        self.age = age

    def speak(self):
        \"\"\"Make the animal speak - to be overridden by subclasses.\"\"\"
        return f"{self.name} makes a sound"

    def display_info(self):
        \"\"\"Display animal information.\"\"\"
        print(f"Name: {self.name}")
        print(f"Age: {self.age}")


class Dog(Animal):
    \"\"\"Dog class inherits from Animal.\"\"\"

    def __init__(self, name, age, breed):
        \"\"\"Initialize dog with additional breed attribute.\"\"\"
        super().__init__(name, age)  # Call parent constructor
        self.breed = breed

    def speak(self):
        \"\"\"Override speak method - dogs bark.\"\"\"
        return f"{self.name} barks: Woof! Woof!"

    def fetch(self):
        \"\"\"Dog-specific method.\"\"\"
        return f"{self.name} is fetching the ball"

    def display_info(self):
        \"\"\"Override display_info to include breed.\"\"\"
        super().display_info()  # Call parent method
        print(f"Breed: {self.breed}")


class Cat(Animal):
    \"\"\"Cat class inherits from Animal.\"\"\"

    def __init__(self, name, age, color):
        \"\"\"Initialize cat with additional color attribute.\"\"\"
        super().__init__(name, age)
        self.color = color

    def speak(self):
        \"\"\"Override speak method - cats meow.\"\"\"
        return f"{self.name} meows: Meow!"

    def scratch(self):
        \"\"\"Cat-specific method.\"\"\"
        return f"{self.name} is scratching the furniture"

    def display_info(self):
        \"\"\"Override display_info to include color.\"\"\"
        super().display_info()
        print(f"Color: {self.color}")


class Bird(Animal):
    \"\"\"Bird class inherits from Animal.\"\"\"

    def __init__(self, name, age, can_fly):
        \"\"\"Initialize bird with flying ability.\"\"\"
        super().__init__(name, age)
        self.can_fly = can_fly

    def speak(self):
        \"\"\"Override speak method - birds chirp.\"\"\"
        return f"{self.name} chirps: Tweet! Tweet!"

    def fly(self):
        \"\"\"Bird-specific method.\"\"\"
        if self.can_fly:
            return f"{self.name} is flying high!"
        else:
            return f"{self.name} cannot fly"

    def display_info(self):
        \"\"\"Override display_info to include flying ability.\"\"\"
        super().display_info()
        print(f"Can Fly: {self.can_fly}")


def main():
    print("=== Inheritance and Method Overriding ===\n")

    # Create objects of different animal types
    dog = Dog("Rex", 3, "Labrador")
    cat = Cat("Whiskers", 2, "Orange")
    bird = Bird("Tweety", 1, True)

    # Demonstrate polymorphism - same method, different behavior
    print("--- Polymorphism: Same method, different implementations ---")
    animals = [dog, cat, bird]
    for animal in animals:
        print(animal.speak())

    print("\n--- Individual Animal Information ---\n")

    print("Dog Information:")
    dog.display_info()
    print(dog.fetch())

    print("\nCat Information:")
    cat.display_info()
    print(cat.scratch())

    print("\nBird Information:")
    bird.display_info()
    print(bird.fly())

    # Demonstrating inheritance hierarchy
    print("\n--- Inheritance Check ---")
    print(f"dog is instance of Dog: {isinstance(dog, Dog)}")
    print(f"dog is instance of Animal: {isinstance(dog, Animal)}")
    print(f"cat is instance of Cat: {isinstance(cat, Cat)}")
    print(f"cat is instance of Animal: {isinstance(cat, Animal)}")


if __name__ == "__main__":
    main()

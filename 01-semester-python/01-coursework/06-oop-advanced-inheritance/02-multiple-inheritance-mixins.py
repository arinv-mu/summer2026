"""
Topic: OOP Advanced (Inheritance and Polymorphism)
Sample 2: Multiple Inheritance and Mixin Classes

Demonstrates:
- Multiple inheritance from multiple parent classes
- Method Resolution Order (MRO)
- Mixin classes for sharing functionality
- Diamond problem and how Python resolves it
- Combining functionality from multiple sources
"""


class Swimmer:
    \"\"\"Mixin class for swimming behavior.\"\"\"

    def swim(self):
        \"\"\"Swimming action.\"\"\"
        return f"{self.name} is swimming gracefully"


class Flyer:
    \"\"\"Mixin class for flying behavior.\"\"\"

    def fly(self):
        \"\"\"Flying action.\"\"\"
        return f"{self.name} is flying high in the sky"


class Walker:
    \"\"\"Mixin class for walking behavior.\"\"\"

    def walk(self):
        \"\"\"Walking action.\"\"\"
        return f"{self.name} is walking on land"


class Animal:
    \"\"\"Base animal class.\"\"\"

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def speak(self):
        return f"{self.name} makes a sound"


class Duck(Animal, Swimmer, Flyer, Walker):
    \"\"\"Duck inherits from Animal and three mixin classes.\"\"\"

    def __init__(self, name, age):
        super().__init__(name, age)

    def speak(self):
        return f"{self.name} quacks: Quack!"

    def display_abilities(self):
        \"\"\"Show all abilities of the duck.\"\"\"
        abilities = [
            self.speak(),
            self.swim(),
            self.fly(),
            self.walk()
        ]
        return "\\n".join(abilities)


class Penguin(Animal, Swimmer, Walker):
    \"\"\"Penguin inherits from Animal and two mixin classes (can't fly).\"\"\"

    def __init__(self, name, age):
        super().__init__(name, age)

    def speak(self):
        return f"{self.name} squeaks: Squeak!"

    def display_abilities(self):
        \"\"\"Show all abilities of the penguin.\"\"\"
        abilities = [
            self.speak(),
            self.swim(),
            self.walk()
        ]
        return "\\n".join(abilities)


class Airplane(Flyer):
    \"\"\"Airplane can fly but is not an animal.\"\"\"

    def __init__(self, name):
        self.name = name

    def speak(self):
        return f"{self.name} makes engine sounds: Vroom!"

    def display_abilities(self):
        return f"{self.speak()}\\n{self.fly()}"


def demonstrate_mro(cls):
    \"\"\"Display Method Resolution Order for a class.\"\"\"
    print(f"\\nMethod Resolution Order for {cls.__name__}:")
    for i, c in enumerate(cls.__mro__):
        print(f"  {i}. {c.__name__}")


def main():
    print("=== Multiple Inheritance and Mixins ===\\n")

    # Create objects with different inheritance combinations
    duck = Duck("Donald", 3)
    penguin = Penguin("Pingu", 2)
    airplane = Airplane("Boeing 747")

    # Display Method Resolution Order
    demonstrate_mro(Duck)
    demonstrate_mro(Penguin)
    demonstrate_mro(Airplane)

    # Display abilities
    print(f"\\n--- Duck Abilities ---")
    print(duck.display_abilities())

    print(f"\\n--- Penguin Abilities ---")
    print(penguin.display_abilities())

    print(f"\\n--- Airplane Abilities ---")
    print(airplane.display_abilities())

    # Demonstrate that methods work correctly
    print(f"\\n--- Individual Method Calls ---")
    print(f"Duck: {duck.speak()}")
    print(f"Duck: {duck.swim()}")
    print(f"Duck: {duck.fly()}")

    print(f"\\nPenguin: {penguin.speak()}")
    print(f"Penguin: {penguin.swim()}")

    print(f"\\nAirplane: {airplane.speak()}")
    print(f"Airplane: {airplane.fly()}")

    # Check instance types
    print(f"\\n--- Instance Checks ---")
    print(f"duck is instance of Swimmer: {isinstance(duck, Swimmer)}")
    print(f"duck is instance of Flyer: {isinstance(duck, Flyer)}")
    print(f"penguin is instance of Flyer: {isinstance(penguin, Flyer)}")
    print(f"airplane is instance of Animal: {isinstance(airplane, Animal)}")


if __name__ == "__main__":
    main()

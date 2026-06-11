/*
 * Topic: Inheritance & Polymorphism
 * Sample 1: Class Inheritance Basics
 *
 * Demonstrates:
 * - Base class and derived class
 * - Inheritance syntax (public)
 * - Constructor chaining with base class
 * - Method overriding
 * - Using base class methods
 * - Inheritance hierarchy
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Base class
class Animal
{
protected:
  string name;
  int age;

public:
  Animal(string n, int a) : name(n), age(a)
  {
    cout << "Animal constructor called for " << name << endl;
  }

  virtual ~Animal()
  {
    cout << "Animal destructor called for " << name << endl;
  }

  virtual void makeSound() const
  {
    cout << name << " makes a sound" << endl;
  }

  void eat() const
  {
    cout << name << " is eating" << endl;
  }

  virtual void displayInfo() const
  {
    cout << name << " (age: " << age << ")" << endl;
  }
};

// Derived class 1
class Dog : public Animal
{
private:
  string breed;

public:
  Dog(string n, int a, string b) : Animal(n, a), breed(b)
  {
    cout << "Dog constructor called" << endl;
  }

  ~Dog()
  {
    cout << "Dog destructor called" << endl;
  }

  // Override method
  void makeSound() const override
  {
    cout << name << " barks: Woof! Woof!" << endl;
  }

  void fetch() const
  {
    cout << name << " fetches the ball!" << endl;
  }

  void displayInfo() const override
  {
    Animal::displayInfo();
    cout << "  Breed: " << breed << endl;
  }
};

// Derived class 2
class Cat : public Animal
{
private:
  bool isIndoor;

public:
  Cat(string n, int a, bool indoor) : Animal(n, a), isIndoor(indoor)
  {
    cout << "Cat constructor called" << endl;
  }

  ~Cat()
  {
    cout << "Cat destructor called" << endl;
  }

  void makeSound() const override
  {
    cout << name << " meows: Meow! Meow!" << endl;
  }

  void scratch() const
  {
    cout << name << " scratches!" << endl;
  }

  void displayInfo() const override
  {
    Animal::displayInfo();
    cout << "  Type: " << (isIndoor ? "indoor" : "outdoor") << endl;
  }
};

// Derived class 3
class Bird : public Animal
{
private:
  double wingspan;

public:
  Bird(string n, int a, double w) : Animal(n, a), wingspan(w)
  {
    cout << "Bird constructor called" << endl;
  }

  ~Bird()
  {
    cout << "Bird destructor called" << endl;
  }

  void makeSound() const override
  {
    cout << name << " chirps: Tweet! Tweet!" << endl;
  }

  void fly() const
  {
    cout << name << " is flying!" << endl;
  }

  void displayInfo() const override
  {
    Animal::displayInfo();
    cout << fixed << setprecision(1);
    cout << "  Wingspan: " << wingspan << " inches" << endl;
  }
};

int main()
{
  cout << "=== Inheritance & Polymorphism ===" << endl
       << endl;

  // 1. Create derived class objects
  cout << "--- Creating Animals ---" << endl;
  Dog dog("Buddy", 3, "Golden Retriever");
  cout << endl;

  Cat cat("Whiskers", 5, true);
  cout << endl;

  Bird bird("Tweety", 2, 10.5);
  cout << endl;

  // 2. Display information
  cout << "\n--- Animal Information ---" << endl;
  dog.displayInfo();
  cout << endl;

  cat.displayInfo();
  cout << endl;

  bird.displayInfo();
  cout << endl;

  // 3. Call overridden methods
  cout << "--- Making Sounds (Virtual Methods) ---" << endl;
  dog.makeSound();
  cat.makeSound();
  bird.makeSound();

  // 4. Call base class methods
  cout << "\n--- Eating ---" << endl;
  dog.eat();
  cat.eat();
  bird.eat();

  // 5. Call derived-specific methods
  cout << "\n--- Animal-Specific Actions ---" << endl;
  dog.fetch();
  cat.scratch();
  bird.fly();

  // 6. Polymorphism with pointer array
  cout << "\n--- Polymorphism with Pointer Array ---" << endl;
  Animal *animals[] = {&dog, &cat, &bird};

  for (int i = 0; i < 3; i++)
  {
    animals[i]->makeSound();
  }

  cout << "\n--- End of program ---" << endl;
  // Destructors will be called automatically

  return 0;
}

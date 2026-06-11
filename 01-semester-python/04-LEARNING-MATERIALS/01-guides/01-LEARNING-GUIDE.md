# Python 10-Week Learning Curriculum

This guide provides a structured 10-week learning path for Python fundamentals and practical applications. **Estimated 45 total hours** (4-5 hours per week).

## Part 1: Quick Start Setup

Before you code, ensure your environment is ready:

```bash
# Activate virtual environment
source ../activate-env.sh

# Verify Python
python --version           # Should be 3.9+

# Check installed packages
pip list | grep -E "requests|beautifulsoup4|pandas|pytest"

# Run test program
python ../01-coursework/01-fundamentals/hello.py
```

## Part 2: 10-Week Structured Learning Path

### Week 1-2: Python Basics & Syntax
**Topics**: Variables, types, operators, I/O, input()
**Time**: 4 hours

**Learning Objectives**:
- [ ] Understand Python syntax and indentation rules
- [ ] Work with different data types (int, float, str, bool)
- [ ] Use operators (arithmetic, comparison, logical)
- [ ] Read user input with input()
- [ ] Print output to console

**Practice**:
1. Run `../02-templates/00-hello.py` and modify it
2. Create 3 small programs in `../03-exercises/week-01-02/`:
   - Program 1: Simple calculator (add, subtract)
   - Program 2: Temperature converter (C to F)
   - Program 3: Age calculator from birth year

**Resources**:
- [Real Python: Python Basics](https://realpython.com/python-basics/)
- [Python Official: Built-in Types](https://docs.python.org/3/library/stdtypes.html)

---

### Week 3-4: Control Flow (if/else, loops)
**Topics**: Conditionals, for/while loops, break/continue
**Time**: 4 hours

**Learning Objectives**:
- [ ] Use if/elif/else statements
- [ ] Write and control for loops
- [ ] Write and control while loops
- [ ] Use break and continue appropriately
- [ ] Understand loop patterns

**Practice**:
1. Write 3 programs in `../03-exercises/week-03-04/`:
   - FizzBuzz program (1-100, print Fizz for multiples of 3, Buzz for 5, FizzBuzz for both)
   - Multiplication table generator
   - Number guesser game

**Resources**:
- [Real Python: if statements](https://realpython.com/python-conditional-statements/)
- [Real Python: for loops](https://realpython.com/loops/)

---

### Week 5-6: Functions & Scope
**Topics**: Function definition, parameters, return values, scope, *args, **kwargs
**Time**: 4 hours

**Learning Objectives**:
- [ ] Define and call functions
- [ ] Understand parameters and return values
- [ ] Work with default parameters
- [ ] Understand variable scope (local/global)
- [ ] Use *args and **kwargs

**Practice**:
1. Refactor week 3-4 programs to use functions
2. Write 3 programs in `../03-exercises/week-05-06/`:
   - Calculator with separate functions for each operation
   - Grade calculator (average multiple scores)
   - String utility functions (reverse, count vowels, etc.)

**Resources**:
- [Real Python: Functions](https://realpython.com/defining-your-own-python-function/)
- [Real Python: *args and **kwargs](https://realpython.com/args-kwargs-python/)

---

### Week 7-8: Data Structures (Lists, Dicts, Sets)
**Topics**: Lists, tuples, dictionaries, sets, comprehensions
**Time**: 4 hours

**Learning Objectives**:
- [ ] Create and manipulate lists, tuples, dicts, sets
- [ ] Understand mutability and when to use each
- [ ] Use list comprehensions
- [ ] Use dict methods (keys(), values(), items())
- [ ] Understand set operations (union, intersection)

**Practice**:
1. Write 3 programs in `../03-exercises/week-07-08/`:
   - Word frequency counter (count words in a sentence)
   - Student grade tracker (dict of students and grades)
   - Unique element finder (from a list)

**Resources**:
- [Real Python: Lists and Tuples](https://realpython.com/lists-tuples/)
- [Real Python: Dictionaries](https://realpython.com/python-dicts/)
- [Real Python: List Comprehensions](https://realpython.com/list-comprehensions/)

---

### Week 9-10: Object-Oriented Programming (OOP) Basics
**Topics**: Classes, objects, attributes, methods, constructors
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand classes and objects
- [ ] Define class attributes and methods
- [ ] Use __init__ (constructor) method
- [ ] Use self parameter
- [ ] Create and use instances

**Practice**:
1. Write 3 programs in `../03-exercises/week-09-10/`:
   - Person class (name, age, greet method)
   - BankAccount class (balance, deposit, withdraw methods)
   - Student class (name, student_id, calculate_grade method)

**Resources**:
- [Real Python: OOP Basics](https://realpython.com/python3-object-oriented-programming/)
- [Official Python: Classes](https://docs.python.org/3/tutorial/classes.html)

---

### Week 11-12: OOP Advanced (Inheritance, Polymorphism)
**Topics**: Inheritance, method overriding, polymorphism, super()
**Time**: 5 hours

**Learning Objectives**:
- [ ] Use inheritance to create subclasses
- [ ] Override parent methods
- [ ] Use super() to call parent methods
- [ ] Understand method resolution order (MRO)
- [ ] Practice polymorphism

**Practice**:
1. Extend week 9-10 classes with inheritance:
   - Create Animal class, then Dog/Cat subclasses
   - Create Vehicle class, then Car/Motorcycle subclasses
   - Create Shape class, then Rectangle/Circle subclasses

**Resources**:
- [Real Python: Inheritance and Composition](https://realpython.com/inheritance-composition-python/)
- [Real Python: super()](https://realpython.com/super/)

---

### Week 13-14: Working with Libraries (requests, BeautifulSoup)
**Topics**: Import external packages, requests, web scraping basics
**Time**: 5 hours

**Learning Objectives**:
- [ ] Understand pip and requirements.txt
- [ ] Use requests library to fetch web pages
- [ ] Use BeautifulSoup to parse HTML
- [ ] Extract data from web pages
- [ ] Handle exceptions from web requests

**Practice**:
1. Write 2 web scraping programs in `../03-exercises/week-13-14/`:
   - Fetch weather data from a public API
   - Scrape quotes from a website (BeautifulSoup)

**Resources**:
- [Real Python: requests](https://realpython.com/python-requests/)
- [Real Python: BeautifulSoup](https://realpython.com/beautiful-soup-web-scraper-python/)
- [requests Documentation](https://requests.readthedocs.io/)

---

### Week 15-16: Data Handling (pandas, CSV, JSON)
**Topics**: pandas DataFrames, reading/writing files, CSV/JSON
**Time**: 5 hours

**Learning Objectives**:
- [ ] Load and explore data with pandas
- [ ] Understand DataFrame operations
- [ ] Read CSV and JSON files
- [ ] Filter and transform data
- [ ] Basic data analysis

**Practice**:
1. Write 2 data programs in `../03-exercises/week-15-16/`:
   - Load CSV, filter data, export results
   - Combine data from multiple sources

**Resources**:
- [Real Python: pandas](https://realpython.com/learning-paths/data-science-python/)
- [pandas Documentation](https://pandas.pydata.org/)

---

### Week 17-18: Testing with pytest
**Topics**: Unit testing, assertions, pytest framework
**Time**: 4 hours

**Learning Objectives**:
- [ ] Understand unit testing concepts
- [ ] Write test functions with pytest
- [ ] Use assertions effectively
- [ ] Run and interpret test results
- [ ] Achieve reasonable test coverage

**Practice**:
1. Write tests for previous programs:
   - Test Calculator functions
   - Test String utility functions
   - Test Student/Person classes

**Resources**:
- [Real Python: pytest](https://realpython.com/pytest-python-testing/)
- [pytest Documentation](https://docs.pytest.org/)

---

### Week 19-20: Capstone Project - Web Scraper
**Topics**: Combine all skills into a project
**Time**: 8 hours

**Project Goals**:
1. Scrape data from a website using requests + BeautifulSoup
2. Process data with pandas
3. Export results to CSV
4. Write unit tests for scraper functions

**Suggested Project**: Weather data scraper
- Fetch current weather for multiple cities
- Extract temperature, conditions, forecast
- Store in CSV with timestamps
- Analyze trends

**Deliverables**:
- `main.py` - Main scraper script
- `utils.py` - Helper functions
- `requirements.txt` - Dependencies
- `test_scraper.py` - Unit tests
- `output.csv` - Sample scraped data
- `README.md` - Instructions and documentation

---

## Part 3: Python-Specific Practices

### Virtual Environment Management
```bash
# Activate environment
source ../activate-env.sh

# Check Python in venv
which python        # Should show venv path

# View installed packages
pip list

# Install new package
pip install package_name

# Update package
pip install --upgrade package_name

# Create requirements file
pip freeze > requirements.txt

# Install from requirements
pip install -r requirements.txt
```

### Code Formatting and Linting
```bash
# Format code with black
black filename.py

# Check code style with pylint
pylint filename.py

# See quick issues
python -m py_compile filename.py
```

---

## Part 4: Assessment Checklist

**End of Week 10, you should be able to:**

- [ ] Write Python programs without looking at tutorials
- [ ] Understand and use OOP concepts
- [ ] Fetch data from the web with requests
- [ ] Parse and analyze data with BeautifulSoup and pandas
- [ ] Write unit tests with pytest
- [ ] Use pip and virtual environments
- [ ] Format and lint your code
- [ ] Debug Python programs
- [ ] Build a complete project from requirements

---

## Part 5: Resources & References

### Official Documentation
- [Python Documentation](https://docs.python.org/3/)
- [Python Standard Library](https://docs.python.org/3/library/)

### Tutorials & Learning
- [Real Python](https://realpython.com/)
- [Codecademy Python](https://www.codecademy.com/learn/learn-python-3)
- [DataCamp Python Courses](https://www.datacamp.com/)

### Practice Sites
- [HackerRank Python](https://www.hackerrank.com/domains/python)
- [LeetCode Easy Problems](https://leetcode.com/)
- [Project Euler](https://projecteuler.net/)

### Key Libraries
- [requests](https://requests.readthedocs.io/)
- [BeautifulSoup4](https://www.crummy.com/software/BeautifulSoup/bs4/doc/)
- [pandas](https://pandas.pydata.org/)
- [pytest](https://docs.pytest.org/)

---

**Ready to code?** Start with week 1-2 exercises in `../03-exercises/week-01-02/`! 🚀

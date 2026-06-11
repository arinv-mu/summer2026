# Python: Common Errors & Debugging Guide

## Error Categories

### 1. Syntax Errors (Won't Run)

#### **SyntaxError: invalid syntax**
```
File "script.py", line 5
    if x = 5:
           ^
SyntaxError: invalid syntax
```

**Common Causes**:
- Using `=` (assignment) instead of `==` (comparison) in conditions
- Missing `:` after `if`, `for`, `def`, `class`
- Mismatched parentheses, brackets, or quotes
- Incorrect indentation

**Fix**:
```python
# Wrong
if x = 5:
    print("Equal")

# Right
if x == 5:
    print("Equal")
```

#### **IndentationError: unexpected indent**
```
IndentationError: unexpected indent
```

**Cause**: Inconsistent indentation (mix of spaces and tabs)

**Fix**:
```python
# Use 4 spaces consistently (not tabs)
if True:
    print("Indented")  # Exactly 4 spaces
    print("Still indented")
```

---

### 2. Import Errors (Can't Find Module)

#### **ModuleNotFoundError: No module named 'X'**
```
Traceback (most recent call last):
  File "script.py", line 1, in <module>
    import requests
ModuleNotFoundError: No module named 'requests'
```

**Solution**:
```bash
# Check if installed
pip list | grep requests

# If not, install
pip install requests

# Verify activated venv
source activate-env.sh
which python  # Should show venv path
```

#### **ImportError: cannot import name 'X'**
```
ImportError: cannot import name 'BeautifulSoup'
```

**Fix**:
```python
# Wrong - BeautifulSoup is in bs4 module
from bs4 import BeautifulSoup  # Correct!

# If you get import error:
from beautifulsoup4 import ...  # Wrong module name
```

---

### 3. Type Errors (Wrong Type)

#### **TypeError: unsupported operand type(s)**
```
TypeError: unsupported operand type(s) for +: 'int' and 'str'
```

**Example**:
```python
# Wrong
result = 5 + "hello"

# Right
result = 5 + int("5")
result = str(5) + "hello"
```

#### **TypeError: 'int' object is not callable**
```
TypeError: 'int' object is not callable
```

**Cause**: Using variable name that conflicts with function, or forgetting parentheses

```python
# Wrong
len = 5
size = len("hello")  # Error - len is now a number!

# Right
length = 5
size = len("hello")  # Use different variable name
```

---

### 4. Attribute Errors (Property/Method Doesn't Exist)

#### **AttributeError: 'X' object has no attribute 'Y'**
```
AttributeError: 'int' object has no attribute 'append'
```

**Example**:
```python
# Wrong
x = 5
x.append(10)  # int doesn't have append method

# Right - append is for lists
x = [5]
x.append(10)

# Common typo
my_list.append()  # Wrong - needs argument
my_list.append(10)  # Right
```

---

### 5. Name Errors (Variable Doesn't Exist)

#### **NameError: name 'X' is not defined**
```
NameError: name 'my_variable' is not defined
```

**Causes**:
- Typo in variable name
- Variable used before definition
- Variable in wrong scope

**Example**:
```python
# Wrong - undefined variable
print(my_variable)

# Right - define first
my_variable = 5
print(my_variable)

# Wrong - scope issue
def my_function():
    local_var = 10

print(local_var)  # Error - not defined outside function

# Right - return or use global
def my_function():
    return 10

result = my_function()
print(result)
```

---

### 6. Index Errors (Index Out of Range)

#### **IndexError: list index out of range**
```
IndexError: list index out of range
```

**Example**:
```python
# Wrong
my_list = [1, 2, 3]
print(my_list[10])  # Only indices 0,1,2 exist

# Right
print(my_list[0])  # Valid
print(my_list[-1])  # Last element

# Check length first
if len(my_list) > index:
    print(my_list[index])
```

---

### 7. Key Errors (Dictionary Key Not Found)

#### **KeyError: 'X'**
```
KeyError: 'name'
```

**Example**:
```python
# Wrong
person = {'age': 30}
print(person['name'])  # Key doesn't exist

# Right - check first
if 'name' in person:
    print(person['name'])

# Or use get with default
print(person.get('name', 'Unknown'))
```

---

### 8. Value Errors (Invalid Value)

#### **ValueError: invalid literal for int()**
```
ValueError: invalid literal for int() with base 10: 'abc'
```

**Example**:
```python
# Wrong
x = int("abc")  # Can't convert 'abc' to int

# Right - validate input
try:
    x = int(user_input)
except ValueError:
    print("Please enter a valid number")
    x = 0
```

---

### 9. File Errors (File Issues)

#### **FileNotFoundError: [Errno 2] No such file**
```
FileNotFoundError: [Errno 2] No such file or directory: 'data.csv'
```

**Example**:
```python
# Wrong
with open('data.csv') as f:
    data = f.read()

# Right - check path
import os
filename = 'data.csv'
if os.path.exists(filename):
    with open(filename) as f:
        data = f.read()
else:
    print(f"File {filename} not found")
```

---

### 10. Logical Errors (Wrong Output, No Error Message)

**Debugging Techniques**:

#### **Print Debugging**
```python
# Add print statements to track values
def calculate_total(items):
    total = 0
    for item in items:
        print(f"Processing: {item}")  # Debug
        total += item['price']
        print(f"Running total: {total}")  # Debug
    return total
```

#### **Using pdb Debugger**
```python
# Add breakpoint
def problematic_function():
    x = 5
    breakpoint()  # Python 3.7+
    y = x * 2
    return y

# Commands:
# (Pdb) n      - Next line
# (Pdb) p x    - Print variable x
# (Pdb) c      - Continue
# (Pdb) h      - Help
```

#### **Unit Tests for Verification**
```python
# Create test file: test_my_code.py
def test_calculate_total():
    result = calculate_total([{'price': 10}, {'price': 20}])
    assert result == 30, f"Expected 30, got {result}"

# Run tests
pytest test_my_code.py -v
```

---

## Debugging Tools & Techniques

### 1. Print Debugging (Simple)
```python
x = 5
print(f"DEBUG: x = {x}")  # Easy to add/remove
print(f"DEBUG: type(x) = {type(x)}")
```

### 2. Assertions (Verify Assumptions)
```python
def divide(a, b):
    assert b != 0, "Cannot divide by zero"
    return a / b

divide(10, 0)  # AssertionError: Cannot divide by zero
```

### 3. Logging (Better Than Print)
```python
import logging

logging.basicConfig(level=logging.DEBUG)
logger = logging.getLogger(__name__)

logger.debug(f"x = {x}")
logger.warning("Something might be wrong")
logger.error("An error occurred")
```

### 4. Try-Except for Graceful Errors
```python
try:
    result = int(user_input)
except ValueError:
    print(f"Invalid input: {user_input}")
    result = 0
```

### 5. Type Hints (Prevent Type Errors)
```python
def greet(name: str) -> str:
    return f"Hello, {name}"

# IDE will warn if you call greet(5)
```

---

## Quick Reference: Common Fixes

| Error | Likely Cause | Quick Fix |
|-------|-------------|----------|
| `NameError` | Typo/not defined | Check spelling, define variable |
| `ModuleNotFoundError` | Package not installed | `pip install package_name` |
| `TypeError` | Wrong type | Check types with `type()` |
| `IndexError` | Index too large | Check list length with `len()` |
| `KeyError` | Key doesn't exist | Use `.get()` or check with `in` |
| `AttributeError` | Method doesn't exist | Check object type/available methods |
| `FileNotFoundError` | File path wrong | Check with `os.path.exists()` |
| `IndentationError` | Bad indentation | Use 4 spaces consistently |
| `SyntaxError` | Invalid syntax | Check `:`, `=` vs `==`, parentheses |
| `ValueError` | Invalid value for type | Validate input before conversion |

---

**Getting more help?** Check Python error messages carefully - they usually tell you the file and line number! 🐍

# Python Learning Materials: Navigation Hub

Welcome! This is your starting point for learning Python. Use this guide to navigate all resources organized for 10 weeks of structured learning.

## 🚀 Quick Start (Do This First)

Before diving into the curriculum, set up your environment:

```bash
# Navigate to Python semester
cd 01-semester-python

# Activate your virtual environment
source activate-env.sh

# Verify setup
python --version          # Should show Python 3.9+
pip list                  # Should show installed packages
python 01-coursework/01-fundamentals/hello.py  # Should run
```

## 📚 Learning Path by Week

| Week | Topics | Focus | Resource |
|------|--------|-------|----------|
| **Week 1-2** | Syntax, types, I/O | Fundamentals | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-1-2) |
| **Week 3-4** | Control flow, loops | Decision-making | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-3-4) |
| **Week 5-6** | Functions, scope | Modularity | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-5-6) |
| **Week 7-8** | Data structures | Lists, dicts, sets | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-7-8) |
| **Week 9-10** | OOP basics | Classes, objects | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-9-10) |
| **Week 11-12** | OOP advanced | Inheritance | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-11-12) |
| **Week 13-14** | Libraries | requests, BeautifulSoup | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-13-14) |
| **Week 15-16** | Data handling | pandas, CSV, JSON | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-15-16) |
| **Week 17-18** | Testing | pytest framework | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-17-18) |
| **Week 19-20** | Project | Web scraper capstone | [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md#week-19-20) |

## 📖 Main Resources

### Getting Started
- **[01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md)** - Complete 10-week curriculum with milestones
- **[02-COMPILATION-REFERENCE.md](02-COMPILATION-REFERENCE.md)** - How to run Python, manage venv/pip

### When You Get Stuck
- **[03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md)** - Common errors and how to fix them

### Code Examples
- **[../02-templates/00-hello.py](../02-templates/00-hello.py)** - Your first Python program
- **[../02-templates/01-requirements.txt](../02-templates/01-requirements.txt)** - Package management template
- **[../02-templates/multi-file/](../02-templates/multi-file/)** - Package structure example

### Practice Exercises
- **[../03-exercises/](../03-exercises/)** - 20 weeks of exercises (week-01-02 through week-19-20)

### Build Your Project
- **[../04-projects/PROJECT-GUIDE.md](../04-projects/PROJECT-GUIDE.md)** - Semester project with milestones

## 🔧 Essential Commands

```bash
# Run a Python file
python filename.py

# Interactive mode (REPL)
python
>>> print("Hello!")
>>> exit()

# Check version
python --version

# Install packages
pip install package_name

# View installed packages
pip list

# Upgrade pip
pip install --upgrade pip

# Format code
black filename.py

# Check code style
pylint filename.py

# Run tests
pytest test_file.py

# Create venv (for future projects)
python -m venv my_env
source my_env/bin/activate
```

## 🎯 Learning Goals by Week

**Weeks 1-4**: Master Python basics
- [ ] Understand variables, types, operators
- [ ] Write conditional logic (if/elif/else)
- [ ] Use loops (for/while)

**Weeks 5-8**: Build modular code
- [ ] Write functions with parameters and returns
- [ ] Understand scope rules
- [ ] Use lists, dicts, and sets effectively

**Weeks 9-12**: Object-oriented programming
- [ ] Create and use classes
- [ ] Understand inheritance
- [ ] Practice polymorphism

**Weeks 13-16**: Work with real data
- [ ] Install and use external libraries
- [ ] Fetch data from the web (requests)
- [ ] Parse HTML (BeautifulSoup)
- [ ] Analyze data (pandas)

**Weeks 17-20**: Test and deliver
- [ ] Write unit tests (pytest)
- [ ] Build web scraper project
- [ ] Output results to CSV

## 📁 File Organization

```
01-semester-python/
├── activate-env.sh         ← Run first to activate venv
├── requirements.txt        ← List of installed packages
├── venv/                   ← Your Python environment (don't edit)
├── 01-coursework/          ← Follow along with structured lessons
├── 02-exercises/           ← Independent practice
├── 03-projects/            ← Build semester project
└── 04-LEARNING-MATERIALS/  ← You are here!
    ├── 01-guides/
    ├── 02-templates/
    ├── 03-exercises/
    └── 04-projects/
```

## 🆘 Getting Help

### If you get an error:
1. Read the error message carefully
2. Search [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md) for your error type
3. Check [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md) for relevant examples

### Recommended Practice Sites
- [Codecademy Python Course](https://www.codecademy.com/learn/learn-python-3)
- [Real Python Tutorials](https://realpython.com/)
- [Python Official Docs](https://docs.python.org/3/)
- [HackerRank Python Challenges](https://www.hackerrank.com/domains/python)
- [LeetCode Python Problems](https://leetcode.com/) (free tier)

## ✅ Verification Checklist

Before moving to week 3, confirm:
- [ ] Virtual environment activates: `source activate-env.sh`
- [ ] Python runs: `python 01-coursework/01-fundamentals/hello.py`
- [ ] Packages installed: `pip list | grep requests`
- [ ] Can import: `python -c "import requests; print('OK')"`

---

**Next Step**: Open [01-LEARNING-GUIDE.md](01-LEARNING-GUIDE.md) to see the full curriculum! 📖

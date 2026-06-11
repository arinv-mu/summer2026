# Python Semester 1: Learning Materials

Welcome to Python fundamentals and rapid prototyping! This folder contains everything you need to learn Python from basics to practical applications.

## Quick Navigation

| Item | Purpose | Time |
|------|---------|------|
| [00-INDEX.md](01-guides/00-INDEX.md) | Start here - navigation hub | 5 min |
| [01-LEARNING-GUIDE.md](01-guides/01-LEARNING-GUIDE.md) | Full curriculum & learning path | 1-2 weeks |
| [02-COMPILATION-REFERENCE.md](01-guides/02-COMPILATION-REFERENCE.md) | venv, pip, execution reference | As needed |
| [03-DEBUGGING-GUIDE.md](01-guides/03-DEBUGGING-GUIDE.md) | Debug common errors | As needed |

## Folder Structure

```
04-LEARNING-MATERIALS/
├── README.md (this file)
├── 01-guides/          ← Start with 00-INDEX.md
│   ├── 00-INDEX.md (navigation)
│   ├── 01-LEARNING-GUIDE.md (curriculum)
│   ├── 02-COMPILATION-REFERENCE.md (venv/pip/execution)
│   └── 03-DEBUGGING-GUIDE.md (common errors)
├── 02-templates/       ← Copy these to get started
│   ├── 00-hello.py (first program)
│   ├── 01-requirements.txt (dependencies template)
│   └── multi-file/ (package structure example)
├── 03-exercises/       ← Practice by week
│   └── week-01-02/ through week-19-20/ (20 weeks of exercises)
└── 04-projects/        ← Build your semester project
    └── PROJECT-GUIDE.md
```

## Getting Started in 5 Minutes

1. **Read the navigation hub**: Open [01-guides/00-INDEX.md](01-guides/00-INDEX.md)
2. **Activate your venv**: `source ../activate-env.sh`
3. **Run hello.py**: `python 02-templates/00-hello.py`
4. **Check your setup**: `python -c "import requests; print('Setup OK!')"`

## Key Facts About This Learning Path

- **Duration**: 10 weeks (weeks 1-20)
- **Commitment**: 1-2 hours per week for exercises
- **Topics**: Fundamentals → OOP → Libraries (requests, BeautifulSoup, pandas)
- **Project**: Web scraper that outputs CSV data
- **Testing**: pytest framework
- **Code style**: black formatter + pylint

## Quick Commands

```bash
# Activate environment
source ../activate-env.sh

# Run a Python file
python filename.py

# Check Python version
python --version

# Install a package
pip install package_name

# List installed packages
pip list

# Format code with black
black filename.py

# Lint code with pylint
pylint filename.py

# Run tests with pytest
pytest test_file.py
```

---

**Ready?** Open [01-guides/00-INDEX.md](01-guides/00-INDEX.md) to begin! 🚀

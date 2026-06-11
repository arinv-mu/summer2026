# Semester 1 - Python Setup Guide

## Overview
This directory contains all Python learning material for Semester 1. The focus is on fundamentals, web scraping, and data structures.

## Prerequisites
- Python 3.12+ installed via Homebrew
- VS Code with Python extensions configured

## Quick Setup

### 1. Create Virtual Environment
```bash
cd /Users/arinvashistha/summer2026/semester-1-python
python3 -m venv venv
source venv/bin/activate
```

### 2. Install Dependencies
```bash
pip install --upgrade pip
pip install -r requirements.txt
```

### 3. Folder Structure

```
01-semester-python/
├── 01-coursework/
│   ├── 01-fundamentals/       # Variables, loops, conditionals
│   ├── 02-web-scraping/       # BeautifulSoup, requests
│   └── 03-data-structures/    # Lists, dicts, sets, tuples
├── 02-exercises/
│   ├── 01-fundamentals/       # Practice problems
│   ├── 02-web-scraping/       # Scraping challenges
│   └── 03-data-structures/    # DS problems
├── 03-projects/
│   ├── 01-simple-calculator/  # CLI calculator
│   └── 02-web-scraper/        # Real-world scraping project
├── requirements.txt           # Python dependencies
└── SETUP.md                   # This file
```

## Dependencies (requirements.txt)
- requests: HTTP library for web requests
- beautifulsoup4: Web scraping library
- pandas: Data analysis and structures
- pytest: Testing framework

## Common Commands

### Run a Python file
```bash
python3 01-coursework/01-fundamentals/hello.py
```

### Run tests
```bash
pytest 02-exercises/
```

### Deactivate environment
```bash
deactivate
```

## Learning Path
1. **Week 1-2**: Fundamentals (01-coursework/01-fundamentals/)
2. **Week 3-4**: Data structures (01-coursework/03-data-structures/)
3. **Week 5-6**: Web scraping (01-coursework/02-web-scraping/)
4. **Week 7-8**: Projects (03-projects/)

## Troubleshooting

### Virtual environment not activating
- Check Python installation: `python3 --version`
- Recreate venv: `rm -rf venv && python3 -m venv venv`

### Module import errors
- Ensure venv is activated: `which python3` should show venv path
- Reinstall requirements: `pip install -r requirements.txt`

## Next Steps
Start with coursework/fundamentals/ and work through topics sequentially.

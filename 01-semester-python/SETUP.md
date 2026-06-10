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
semester-1-python/
├── coursework/
│   ├── fundamentals/          # Variables, loops, conditionals
│   ├── web-scraping/          # BeautifulSoup, requests
│   └── data-structures/       # Lists, dicts, sets, tuples
├── projects/
│   ├── simple-calculator/     # CLI calculator
│   └── web-scraper/           # Real-world scraping project
├── exercises/
│   ├── fundamentals/          # Practice problems
│   ├── web-scraping/          # Scraping challenges
│   └── data-structures/       # DS problems
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
python3 coursework/fundamentals/hello.py
```

### Run tests
```bash
pytest exercises/
```

### Deactivate environment
```bash
deactivate
```

## Learning Path
1. **Week 1-2**: Fundamentals (variables, loops, conditionals)
2. **Week 3-4**: Data structures (lists, dicts, sets)
3. **Week 5-6**: Web scraping (BeautifulSoup, requests)
4. **Week 7-8**: Project (Simple calculator)

## Troubleshooting

### Virtual environment not activating
- Check Python installation: `python3 --version`
- Recreate venv: `rm -rf venv && python3 -m venv venv`

### Module import errors
- Ensure venv is activated: `which python3` should show venv path
- Reinstall requirements: `pip install -r requirements.txt`

## Next Steps
Start with coursework/fundamentals/ and work through topics sequentially.

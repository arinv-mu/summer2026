# Python Semester Project: Web Scraper

**Duration**: Weeks 19-20 (Final 2 weeks of semester)
**Difficulty**: Intermediate
**Skills Used**: requests, BeautifulSoup, pandas, file I/O, testing

## Project Goals

Build a complete web scraper application that:
1. Fetches data from a website using HTTP requests
2. Parses HTML with BeautifulSoup
3. Processes and stores data
4. Exports results to CSV
5. Includes unit tests

## Project Milestones

### Milestone 1: Fetch and Parse (3 hours)
- [ ] Set up project structure (main.py, scraper.py, requirements.txt)
- [ ] Install required packages (requests, beautifulsoup4, pandas)
- [ ] Fetch a web page using requests
- [ ] Parse HTML and extract data with BeautifulSoup
- [ ] Print extracted data to console

### Milestone 2: Data Processing (2 hours)
- [ ] Store scraped data in pandas DataFrame
- [ ] Clean and transform data (remove duplicates, handle missing values)
- [ ] Add timestamps to records
- [ ] Group or aggregate data

### Milestone 3: Export & Storage (2 hours)
- [ ] Save data to CSV file
- [ ] Implement pagination (handle multiple pages)
- [ ] Add error handling for network issues
- [ ] Create README with usage instructions

### Milestone 4: Testing & Polish (3 hours)
- [ ] Write unit tests with pytest
- [ ] Test scraper functions
- [ ] Test data processing
- [ ] Handle edge cases
- [ ] Final documentation

## Suggested Project: Weather Data Scraper

**Target Website**: Weather.com or similar public data
**Data to Extract**: City, Temperature, Conditions, Forecast

### Project Structure
```
weather-scraper/
├── main.py              # Entry point
├── scraper.py           # Scraping logic
├── processor.py         # Data processing
├── requirements.txt     # Dependencies
├── weather_data.csv     # Output file
├── tests/
│   ├── test_scraper.py
│   ├── test_processor.py
│   └── test_main.py
└── README.md            # Documentation
```

### Files & Implementation

**main.py** (Entry point):
```python
#!/usr/bin/env python3
"""Weather scraper main entry point."""

from scraper import scrape_weather
from processor import process_data
import csv
from datetime import datetime

def main():
    print("Starting weather scraper...")

    # Scrape data
    cities = ['New York', 'Los Angeles', 'Chicago']
    weather_data = scrape_weather(cities)

    # Process data
    processed_data = process_data(weather_data)

    # Export to CSV
    filename = f'weather_{datetime.now().date()}.csv'
    with open(filename, 'w', newline='') as f:
        writer = csv.DictWriter(f, fieldnames=['city', 'temp', 'conditions', 'timestamp'])
        writer.writeheader()
        writer.writerows(processed_data)

    print(f"✅ Data saved to {filename}")

if __name__ == "__main__":
    main()
```

**scraper.py** (Web scraping):
```python
"""Web scraping functions."""

import requests
from bs4 import BeautifulSoup

def scrape_weather(cities):
    """Scrape weather data for given cities."""
    weather_list = []

    for city in cities:
        try:
            # Fetch page
            url = f"https://weather.example.com/{city}"
            response = requests.get(url, timeout=5)
            response.raise_for_status()

            # Parse HTML
            soup = BeautifulSoup(response.content, 'html.parser')

            # Extract data
            temp = soup.find('span', class_='temperature').text
            conditions = soup.find('div', class_='conditions').text

            weather_list.append({
                'city': city,
                'temperature': temp,
                'conditions': conditions
            })
        except Exception as e:
            print(f"Error scraping {city}: {e}")

    return weather_list
```

**processor.py** (Data processing):
```python
"""Data processing functions."""

from datetime import datetime
import pandas as pd

def process_data(weather_data):
    """Process and clean weather data."""
    df = pd.DataFrame(weather_data)

    # Add timestamp
    df['timestamp'] = datetime.now().isoformat()

    # Remove duplicates
    df = df.drop_duplicates(subset=['city'])

    # Convert to lowercase city names
    df['city'] = df['city'].str.lower()

    return df.to_dict('records')
```

**tests/test_scraper.py** (Unit tests):
```python
"""Tests for scraper module."""

import pytest
from scraper import scrape_weather

def test_scrape_weather_returns_list():
    """Test that scrape_weather returns a list."""
    result = scrape_weather(['TestCity'])
    assert isinstance(result, list)

def test_scrape_weather_structure():
    """Test data structure of scraped weather."""
    # This would need mocking to avoid actual network calls
    pass
```

## Requirements

```
requests>=2.28.0          # HTTP requests
beautifulsoup4>=4.11.0    # HTML parsing
pandas>=1.5.0             # Data handling
pytest>=7.2.0             # Testing
```

## Success Criteria

- [ ] Successfully scrapes data from website
- [ ] Data stored in CSV with proper format
- [ ] All unit tests pass: `pytest tests/ -v`
- [ ] Error handling for network failures
- [ ] README with clear usage instructions
- [ ] Code formatted with `black main.py scraper.py processor.py`
- [ ] No linting errors: `pylint *.py`

## Running the Project

```bash
# Setup
pip install -r requirements.txt

# Run scraper
python main.py

# Run tests
pytest tests/ -v

# Format code
black *.py

# Check code quality
pylint *.py
```

## Deliverables

1. **source_code/** - All Python files
2. **weather_data.csv** - Sample output
3. **tests/** - Unit test files (all passing)
4. **README.md** - Usage and documentation
5. **requirements.txt** - Dependencies

---

**Good luck!** This project combines everything you've learned in the past 20 weeks! 🚀

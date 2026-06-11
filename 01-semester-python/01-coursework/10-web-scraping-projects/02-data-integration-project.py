"""
Topic: Web Scraping Projects (Capstone)
Sample 2: Real-World Data Integration Project

Demonstrates:
- Combining multiple data sources
- Data normalization and integration
- Advanced error handling and recovery
- Caching for efficiency
- Data validation and quality checks
- Complete workflow from collection to analysis
"""

import sys
import json
import csv
from datetime import datetime, timedelta
import hashlib

try:
    import requests
    from bs4 import BeautifulSoup
    import pandas as pd
except ImportError as e:
    print("Error: Required library not installed.")
    print("Install with: pip install requests beautifulsoup4 pandas")
    sys.exit(1)


class DataIntegrationProject:
    \"\"\"Integrate data from multiple sources and generate insights.\"\"\"

    def __init__(self):
        \"\"\"Initialize project.\"\"\"
        self.sources = {}
        self.cache = {}
        self.timestamp = datetime.now().isoformat()

    def add_source(self, name, data):
        \"\"\"Add data source.\"\"\"
        self.sources[name] = data
        print(f"✓ Added source: {name} ({len(data)} records)")

    def fetch_and_cache(self, url, cache_key):
        \"\"\"Fetch data with caching.\"\"\"
        if cache_key in self.cache:
            print(f"Cache hit for: {cache_key}")
            return self.cache[cache_key]

        try:
            response = requests.get(url, timeout=5)
            response.raise_for_status()
            data = response.json()
            self.cache[cache_key] = data
            print(f"✓ Fetched and cached: {cache_key}")
            return data
        except Exception as e:
            print(f"✗ Error fetching {cache_key}: {e}")
            return None

    def validate_data(self, record, required_fields):
        \"\"\"Validate record has required fields.\"\"\"
        return all(field in record for field in required_fields)

    def normalize_data(self):
        \"\"\"Normalize data from different sources.\"\"\"
        print("\\n=== Data Normalization ===\\n")

        normalized = []

        for source_name, records in self.sources.items():
            print(f"Normalizing source: {source_name}")

            for record in records:
                # Add metadata
                normalized_record = {
                    "source": source_name,
                    "collected_at": self.timestamp,
                    "record_hash": hashlib.md5(
                        json.dumps(record, sort_keys=True).encode()
                    ).hexdigest()
                }

                # Add source data
                normalized_record.update(record)
                normalized.append(normalized_record)

        print(f"Total normalized records: {len(normalized)}")
        return normalized

    def quality_check(self, data):
        \"\"\"Perform quality checks on data.\"\"\"
        print("\\n=== Quality Checks ===\\n")

        issues = {
            "missing_fields": 0,
            "duplicates": 0,
            "invalid_types": 0
        }

        seen_hashes = set()
        for record in data:
            # Check for duplicates
            record_hash = record.get("record_hash")
            if record_hash in seen_hashes:
                issues["duplicates"] += 1
            seen_hashes.add(record_hash)

        print(f"Data quality report:")
        print(f"  Total records: {len(data)}")
        print(f"  Duplicate records: {issues['duplicates']}")
        print(f"  Issues found: {sum(issues.values())}")

        return issues

    def generate_insights(self, data):
        \"\"\"Generate insights from integrated data.\"\"\"
        print("\\n=== Insights ===\\n")

        if not data:
            print("No data available for analysis")
            return

        # Convert to DataFrame for analysis
        df = pd.DataFrame(data)

        print(f"Data sources used: {df['source'].nunique()}")
        print(f"Records per source:")
        print(df["source"].value_counts().to_string())

        print(f"\\nCollection timestamp: {df['collected_at'].iloc[0]}")

    def export_integrated_data(self, data):
        \"\"\"Export integrated data.\"\"\"
        print("\\n=== Exporting Integrated Data ===\\n")

        try:
            # Export to JSON
            with open("integrated_data.json", "w") as f:
                json.dump(data, f, indent=2)
            print("✓ Exported to: integrated_data.json")

            # Export to CSV
            df = pd.DataFrame(data)
            df.to_csv("integrated_data.csv", index=False)
            print("✓ Exported to: integrated_data.csv")

        except Exception as e:
            print(f"✗ Error exporting: {e}")

    def generate_summary_report(self):
        \"\"\"Generate complete project summary.\"\"\"
        print("\\n=== Project Summary Report ===\\n")

        print(f"Timestamp: {self.timestamp}")
        print(f"Data sources: {len(self.sources)}")
        print(f"Total records: {sum(len(v) for v in self.sources.values())}")
        print(f"Cache entries: {len(self.cache)}")


def main():
    print("=== Real-World Data Integration Project ===\\n")

    # Initialize project
    project = DataIntegrationProject()

    # Simulate data collection from multiple sources
    print("=== Collecting Data ===\\n")

    # Source 1: Posts
    try:
        posts_response = requests.get(
            "https://jsonplaceholder.typicode.com/posts?_limit=3",
            timeout=5
        )
        posts = posts_response.json()
        project.add_source("posts", posts)
    except Exception as e:
        print(f"Error collecting posts: {e}")
        posts = []

    # Source 2: Users
    try:
        users_response = requests.get(
            "https://jsonplaceholder.typicode.com/users?_limit=2",
            timeout=5
        )
        users = users_response.json()
        project.add_source("users", users)
    except Exception as e:
        print(f"Error collecting users: {e}")
        users = []

    # Normalize data
    normalized_data = project.normalize_data()

    # Quality checks
    project.quality_check(normalized_data)

    # Generate insights
    project.generate_insights(normalized_data)

    # Export data
    project.export_integrated_data(normalized_data)

    # Final report
    project.generate_summary_report()

    print("\\n=== Data Integration Project Completed ===")


if __name__ == "__main__":
    main()

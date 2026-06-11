"""
Topic: Web Scraping Projects (Capstone)
Sample 1: Complete Web Scraping Project

Demonstrates:
- End-to-end web scraping workflow
- Fetching data from multiple sources
- Data processing and cleaning
- Exporting results to files
- Error handling and logging
- Rate limiting and ethical scraping
"""

import sys
import csv
import json
from datetime import datetime
import time

try:
    import requests
    from bs4 import BeautifulSoup
except ImportError:
    print("Error: requests and beautifulsoup4 not installed.")
    print("Install with: pip install requests beautifulsoup4")
    sys.exit(1)


class WebScraper:
    \"\"\"A simple web scraper for collecting and processing web data.\"\"\"

    def __init__(self, delay=1):
        \"\"\"Initialize scraper with optional delay between requests.\"\"\"
        self.delay = delay
        self.data = []
        self.log = []

    def log_message(self, message):
        \"\"\"Log messages for debugging.\"\"\"
        timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        log_entry = f"[{timestamp}] {message}"
        self.log.append(log_entry)
        print(log_entry)

    def fetch_page(self, url):
        \"\"\"Fetch a web page with error handling.\"\"\"
        try:
            self.log_message(f"Fetching: {url}")
            response = requests.get(url, timeout=10)
            response.raise_for_status()
            time.sleep(self.delay)  # Rate limiting
            return response.content
        except requests.exceptions.RequestException as e:
            self.log_message(f"Error fetching {url}: {e}")
            return None

    def parse_html(self, content):
        \"\"\"Parse HTML content.\"\"\"
        try:
            return BeautifulSoup(content, "html.parser")
        except Exception as e:
            self.log_message(f"Error parsing HTML: {e}")
            return None

    def scrape_posts_example(self):
        \"\"\"Scrape posts from JSONPlaceholder API.\"\"\"
        self.log_message("Starting post scraping...")

        try:
            url = "https://jsonplaceholder.typicode.com/posts?_limit=5"
            response = requests.get(url)
            response.raise_for_status()

            posts = response.json()
            for post in posts:
                self.data.append({
                    "type": "post",
                    "id": post["id"],
                    "title": post["title"],
                    "body": post["body"][:100],
                    "userId": post["userId"]
                })

            self.log_message(f"Scraped {len(posts)} posts")

        except Exception as e:
            self.log_message(f"Error scraping posts: {e}")

    def scrape_users_example(self):
        \"\"\"Scrape user information from JSONPlaceholder API.\"\"\"
        self.log_message("Starting user scraping...")

        try:
            url = "https://jsonplaceholder.typicode.com/users?_limit=3"
            response = requests.get(url)
            response.raise_for_status()

            users = response.json()
            for user in users:
                self.data.append({
                    "type": "user",
                    "id": user["id"],
                    "name": user["name"],
                    "email": user["email"],
                    "city": user["address"].get("city", "N/A")
                })

            self.log_message(f"Scraped {len(users)} users")

        except Exception as e:
            self.log_message(f"Error scraping users: {e}")

    def export_to_json(self, filename="scraped_data.json"):
        \"\"\"Export scraped data to JSON file.\"\"\"
        try:
            with open(filename, "w") as f:
                json.dump(self.data, f, indent=2)
            self.log_message(f"Exported {len(self.data)} records to {filename}")
        except Exception as e:
            self.log_message(f"Error exporting JSON: {e}")

    def export_to_csv(self, filename="scraped_data.csv"):
        \"\"\"Export scraped data to CSV file.\"\"\"
        try:
            if not self.data:
                self.log_message("No data to export")
                return

            # Get all unique keys from all records
            all_keys = set()
            for record in self.data:
                all_keys.update(record.keys())

            with open(filename, "w", newline='') as f:
                writer = csv.DictWriter(f, fieldnames=sorted(all_keys))
                writer.writeheader()
                writer.writerows(self.data)

            self.log_message(f"Exported {len(self.data)} records to {filename}")

        except Exception as e:
            self.log_message(f"Error exporting CSV: {e}")

    def generate_report(self):
        \"\"\"Generate a scraping report.\"\"\"
        print("\\n=== Scraping Report ===\\n")
        print(f"Total records collected: {len(self.data)}")
        print(f"Records by type:")
        type_count = {}
        for record in self.data:
            record_type = record.get("type", "unknown")
            type_count[record_type] = type_count.get(record_type, 0) + 1

        for record_type, count in type_count.items():
            print(f"  - {record_type}: {count}")

    def save_log(self, filename="scraping_log.txt"):
        \"\"\"Save scraping log to file.\"\"\"
        try:
            with open(filename, "w") as f:
                f.write("\\n".join(self.log))
            self.log_message(f"Log saved to {filename}")
        except Exception as e:
            self.log_message(f"Error saving log: {e}")


def main():
    print("=== Web Scraping Capstone Project ===\\n")

    # Create scraper instance
    scraper = WebScraper(delay=1)

    # Perform scraping tasks
    scraper.scrape_posts_example()
    scraper.scrape_users_example()

    # Generate report
    scraper.generate_report()

    # Export data
    print("\\n=== Exporting Data ===\\n")
    scraper.export_to_json()
    scraper.export_to_csv()

    # Save log
    scraper.save_log()

    print("\\n=== Scraping project completed ===")
    print("Files generated:")
    print("  - scraped_data.json")
    print("  - scraped_data.csv")
    print("  - scraping_log.txt")


if __name__ == "__main__":
    main()

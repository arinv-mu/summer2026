"""
Topic: Working with External Libraries
Sample 2: Web Scraping with BeautifulSoup

Demonstrates:
- Making HTTP requests and parsing HTML
- Using BeautifulSoup to parse HTML content
- Extracting specific elements from web pages
- Navigating the DOM structure
- Error handling for web scraping
- Respecting robots.txt and ethical scraping
"""

import sys

try:
    import requests
    from bs4 import BeautifulSoup
except ImportError as e:
    print(f"Error: Required library not installed.")
    print("Install with: pip install requests beautifulsoup4")
    sys.exit(1)


def scrape_example_page():
    \"\"\"Scrape a simple example website.\"\"\"
    try:
        print("Scraping example website...\\n")

        # Simple website for learning
        url = "https://example.com"

        response = requests.get(url, timeout=5)
        response.raise_for_status()

        # Parse HTML content
        soup = BeautifulSoup(response.content, "html.parser")

        # Extract title
        title = soup.find("title")
        if title:
            print(f"Page Title: {title.text}")

        # Extract all headings
        headings = soup.find_all("h1")
        if headings:
            print(f"\\nHeadings found:")
            for h in headings:
                print(f"  - {h.text}")

        # Extract paragraphs
        paragraphs = soup.find_all("p")
        if paragraphs:
            print(f"\\nParagraph content:")
            for p in paragraphs[:2]:  # First 2 paragraphs
                print(f"  {p.text[:100]}...")

        # Extract links
        links = soup.find_all("a", limit=5)
        if links:
            print(f"\\nFirst 5 links:")
            for link in links:
                href = link.get("href")
                text = link.text.strip()
                if href and text:
                    print(f"  - {text}: {href}")

        return soup

    except requests.exceptions.RequestException as e:
        print(f"Error fetching page: {e}")
        return None
    except Exception as e:
        print(f"Error parsing page: {e}")
        return None


def scrape_quotes_example():
    \"\"\"Scrape quotes from a mock website.\"\"\"
    try:
        print("\\nScraping quotes example...\\n")

        # Using HTTPBin to return HTML
        html_content = '''
        <html>
            <body>
                <div class="quote">
                    <p>"Life is what happens when you are busy making other plans." - John Lennon</p>
                </div>
                <div class="quote">
                    <p>"The future belongs to those who believe in the beauty of their dreams." - Eleanor Roosevelt</p>
                </div>
                <div class="quote">
                    <p>"It is during our darkest moments that we must focus on the light." - Aristotle</p>
                </div>
            </body>
        </html>
        '''

        soup = BeautifulSoup(html_content, "html.parser")

        # Find all quote divs
        quotes = soup.find_all("div", class_="quote")
        print(f"Found {len(quotes)} quotes:\\n")

        for i, quote in enumerate(quotes, 1):
            text = quote.find("p").text
            print(f"{i}. {text}\\n")

    except Exception as e:
        print(f"Error scraping quotes: {e}")


def parse_html_structure():
    \"\"\"Demonstrate HTML parsing and navigation.\"\"\"
    try:
        print("\\nDemonstrating HTML structure parsing...\\n")

        html_content = '''
        <html>
            <head>
                <title>Sample Page</title>
            </head>
            <body>
                <div class="container">
                    <article>
                        <h2>Article Title</h2>
                        <p class="author">By John Doe</p>
                        <p class="content">This is article content.</p>
                    </article>
                </div>
            </body>
        </html>
        '''

        soup = BeautifulSoup(html_content, "html.parser")

        # Different ways to find elements
        print("1. Find by tag name:")
        title = soup.find("title")
        print(f"   Title: {title.text if title else 'Not found'}")

        print("\\n2. Find by class name:")
        author = soup.find("p", class_="author")
        print(f"   Author: {author.text if author else 'Not found'}")

        print("\\n3. Find all by tag:")
        paragraphs = soup.find_all("p")
        print(f"   Found {len(paragraphs)} paragraphs")

        print("\\n4. Navigate parent-child relationships:")
        container = soup.find("div", class_="container")
        if container:
            article = container.find("article")
            if article:
                print(f"   Article found in container: {article.find('h2').text}")

    except Exception as e:
        print(f"Error parsing HTML: {e}")


def main():
    print("=== Working with Libraries: BeautifulSoup ===\\n")

    # Scrape example website
    scrape_example_page()

    # Scrape quotes example
    scrape_quotes_example()

    # Parse HTML structure
    parse_html_structure()

    print("\\n=== Web scraping demonstration completed ===")
    print("\\nNote: Always check robots.txt and terms of service before scraping!")


if __name__ == "__main__":
    main()

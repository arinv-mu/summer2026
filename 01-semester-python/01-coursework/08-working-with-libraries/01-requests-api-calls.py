"""
Topic: Working with External Libraries
Sample 1: Using requests Library for API Requests

Demonstrates:
- Making HTTP requests with requests library
- Handling different HTTP response codes
- Parsing JSON responses
- Using query parameters
- Error handling for network requests
- Working with response headers
"""

import json
import sys

try:
    import requests
except ImportError:
    print("Error: requests library not installed.")
    print("Install with: pip install requests")
    sys.exit(1)


def fetch_json_data():
    \"\"\"Fetch JSON data from a public API.\"\"\"
    try:
        print("Fetching JSON data from API...\\n")

        # JSONPlaceholder is a fake API for testing
        url = "https://jsonplaceholder.typicode.com/users/1"

        response = requests.get(url)
        response.raise_for_status()  # Raise exception for bad status codes

        user_data = response.json()
        print("User Information:")
        print(f"  Name: {user_data.get('name')}")
        print(f"  Email: {user_data.get('email')}")
        print(f"  Phone: {user_data.get('phone')}")
        print(f"  Company: {user_data.get('company', {}).get('name')}")

        return user_data

    except requests.exceptions.ConnectionError:
        print("Connection Error: Unable to reach the server")
        return None
    except requests.exceptions.Timeout:
        print("Timeout Error: Request took too long")
        return None
    except requests.exceptions.HTTPError as e:
        print(f"HTTP Error: {e}")
        return None
    except requests.exceptions.RequestException as e:
        print(f"Request Error: {e}")
        return None


def fetch_multiple_posts():
    \"\"\"Fetch multiple posts from an API with query parameters.\"\"\"
    try:
        print("\\nFetching posts from API...\\n")

        # API endpoint
        url = "https://jsonplaceholder.typicode.com/posts"

        # Query parameters
        params = {
            "userId": 1,
            "_limit": 3  # Limit to 3 posts
        }

        response = requests.get(url, params=params)
        response.raise_for_status()

        posts = response.json()
        print(f"Retrieved {len(posts)} posts:")
        for post in posts:
            print(f"\\n  Title: {post['title']}")
            print(f"  Body: {post['body'][:60]}...")

        return posts

    except requests.exceptions.RequestException as e:
        print(f"Error fetching posts: {e}")
        return None


def check_response_status():
    \"\"\"Check different HTTP response codes.\"\"\"
    try:
        print("\\nChecking different URLs...\\n")

        urls = [
            ("https://jsonplaceholder.typicode.com/posts/1", "Valid Post"),
            ("https://jsonplaceholder.typicode.com/posts/999999", "Non-existent Post"),
            ("https://httpstat.us/500", "Server Error"),
        ]

        for url, description in urls:
            try:
                response = requests.get(url, timeout=5)
                status = response.status_code

                if 200 <= status < 300:
                    print(f"✓ {description}: {status} OK")
                elif 300 <= status < 400:
                    print(f"→ {description}: {status} Redirect")
                elif 400 <= status < 500:
                    print(f"✗ {description}: {status} Client Error")
                else:
                    print(f"✗ {description}: {status} Server Error")

            except requests.exceptions.RequestException as e:
                print(f"✗ {description}: Error - {str(e)[:50]}")

    except Exception as e:
        print(f"Error checking URLs: {e}")


def main():
    print("=== Working with Libraries: requests ===\\n")

    # Fetch single user data
    fetch_json_data()

    # Fetch multiple posts
    fetch_multiple_posts()

    # Check response statuses
    check_response_status()

    print("\\n=== API requests completed ===")


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""
Multi-file Python package example.
This is the main entry point.
"""

from mypackage import utils

def main():
    """Main entry point."""
    print("Starting application...")
    
    # Use utility functions
    result = utils.add(5, 3)
    print(f"5 + 3 = {result}")
    
    greeting = utils.greet("Alice")
    print(greeting)
    
    print("Done!")

if __name__ == "__main__":
    main()

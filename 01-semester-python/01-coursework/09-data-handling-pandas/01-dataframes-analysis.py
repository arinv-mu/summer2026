"""
Topic: Data Handling with pandas
Sample 1: DataFrames and Basic Data Analysis

Demonstrates:
- Creating DataFrames from various sources
- Accessing and manipulating DataFrame data
- Filtering and selecting data
- DataFrame methods and attributes
- Basic data aggregation and statistics
"""

import sys

try:
    import pandas as pd
    import numpy as np
except ImportError:
    print("Error: pandas or numpy not installed.")
    print("Install with: pip install pandas numpy")
    sys.exit(1)


def create_dataframe_examples():
    \"\"\"Create DataFrames in different ways.\"\"\"
    print("=== Creating DataFrames ===\\n")

    # Create from dictionary
    data = {
        "name": ["Alice", "Bob", "Charlie", "Diana"],
        "age": [20, 21, 19, 22],
        "gpa": [3.8, 3.5, 3.9, 3.7],
        "major": ["CS", "Math", "Physics", "CS"]
    }
    df = pd.DataFrame(data)
    print("DataFrame from dictionary:")
    print(df)
    print()

    return df


def explore_dataframe(df):
    \"\"\"Explore DataFrame structure and contents.\"\"\"
    print("\\n=== Exploring DataFrame ===\\n")

    print(f"Shape: {df.shape} (rows, columns)")
    print(f"\\nColumn names: {df.columns.tolist()}")
    print(f"\\nData types:\\n{df.dtypes}")
    print(f"\\nFirst row:\\n{df.iloc[0]}")


def access_data(df):
    \"\"\"Demonstrate data access patterns.\"\"\"
    print("\\n=== Accessing Data ===\\n")

    # Access column
    print("All names:")
    print(df["name"].tolist())

    # Access specific cell
    print(f"\\nAlice's GPA: {df.loc[0, 'gpa']}")

    # Access row
    print(f"\\nBob's information:")
    print(df.loc[1])


def filter_data(df):
    \"\"\"Filter DataFrame based on conditions.\"\"\"
    print("\\n=== Filtering Data ===\\n")

    # Filter by condition
    high_gpa = df[df["gpa"] > 3.7]
    print("Students with GPA > 3.7:")
    print(high_gpa[["name", "gpa"]])

    # Filter by multiple conditions
    cs_high_gpa = df[(df["major"] == "CS") & (df["gpa"] >= 3.7)]
    print("\\nCS students with GPA >= 3.7:")
    print(cs_high_gpa[["name", "gpa", "major"]])

    # Filter by value in list
    stem_majors = df[df["major"].isin(["CS", "Physics"])]
    print("\\nSTEM majors:")
    print(stem_majors[["name", "major"]])


def statistical_analysis(df):
    \"\"\"Perform statistical analysis on DataFrame.\"\"\"
    print("\\n=== Statistical Analysis ===\\n")

    # Basic statistics
    print("Summary statistics:")
    print(df[["age", "gpa"]].describe())

    print(f"\\nMean GPA: {df['gpa'].mean():.2f}")
    print(f"Median age: {df['age'].median():.0f}")
    print(f"Max GPA: {df['gpa'].max():.2f}")
    print(f"Min age: {df['age'].min()}")

    # Count by group
    print(f"\\nStudents by major:")
    print(df["major"].value_counts())


def modify_dataframe(df):
    \"\"\"Demonstrate DataFrame modifications.\"\"\"
    print("\\n=== Modifying DataFrame ===\\n")

    # Create copy to avoid modifying original
    df_modified = df.copy()

    # Add new column
    df_modified["grade_letter"] = df_modified["gpa"].apply(
        lambda x: "A" if x >= 3.7 else "B" if x >= 3.5 else "C"
    )
    print("After adding grade_letter column:")
    print(df_modified[["name", "gpa", "grade_letter"]])

    # Rename column
    df_modified = df_modified.rename(columns={"gpa": "cumulative_gpa"})
    print(f"\\nAfter renaming 'gpa' to 'cumulative_gpa':")
    print(df_modified.columns.tolist())

    return df_modified


def sort_and_group(df):
    \"\"\"Sort and group data.\"\"\"
    print("\\n=== Sorting and Grouping ===\\n")

    # Sort by column
    sorted_df = df.sort_values("gpa", ascending=False)
    print("Sorted by GPA (descending):")
    print(sorted_df[["name", "gpa"]])

    # Group by column
    print("\\nGrouped by major (mean GPA):")
    grouped = df.groupby("major")["gpa"].mean()
    print(grouped)


def main():
    print("=== Data Handling with pandas ===\\n")

    # Create DataFrame
    df = create_dataframe_examples()

    # Explore DataFrame
    explore_dataframe(df)

    # Access data
    access_data(df)

    # Filter data
    filter_data(df)

    # Statistical analysis
    statistical_analysis(df)

    # Modify DataFrame
    modified_df = modify_dataframe(df)

    # Sort and group
    sort_and_group(df)

    print("\\n=== Data analysis completed ===")


if __name__ == "__main__":
    main()

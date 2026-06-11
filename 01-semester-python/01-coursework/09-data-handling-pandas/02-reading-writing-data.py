"""
Topic: Data Handling with pandas
Sample 2: Reading and Writing Data Files

Demonstrates:
- Reading CSV files with pandas
- Reading JSON files with pandas
- Writing DataFrames to files
- Data cleaning and preprocessing
- Handling missing data
- Exporting processed data
"""

import sys
import os

try:
    import pandas as pd
    import numpy as np
except ImportError:
    print("Error: pandas or numpy not installed.")
    print("Install with: pip install pandas numpy")
    sys.exit(1)


def create_sample_csv():
    \"\"\"Create a sample CSV file for demonstration.\"\"\"
    csv_content = \"\"\"name,age,salary,department,years_experience
Alice,28,75000,Engineering,5
Bob,32,85000,Engineering,8
Charlie,25,65000,Marketing,3
Diana,35,95000,Finance,10
Eve,29,72000,Marketing,4
Frank,31,88000,Engineering,7
Grace,26,68000,Finance,2
Henry,33,92000,Finance,9
\"\"\"

    with open("employees.csv", "w") as f:
        f.write(csv_content)

    print("Sample CSV file created: employees.csv")


def read_csv_file():
    \"\"\"Read and explore CSV file.\"\"\"
    print("\\n=== Reading CSV File ===\\n")

    try:
        # Read CSV file
        df = pd.read_csv("employees.csv")

        print("First few rows:")
        print(df.head())

        print(f"\\nDataFrame shape: {df.shape}")
        print(f"Columns: {df.columns.tolist()}")

        return df

    except FileNotFoundError:
        print("employees.csv not found!")
        return None
    except Exception as e:
        print(f"Error reading CSV: {e}")
        return None


def data_cleaning(df):
    \"\"\"Demonstrate data cleaning operations.\"\"\"
    print("\\n=== Data Cleaning ===\\n")

    # Create a copy to work with
    df_clean = df.copy()

    # Check for missing values
    print("Missing values:")
    print(df_clean.isnull().sum())

    # Check data types
    print(f"\\nData types:")
    print(df_clean.dtypes)

    # Remove duplicate rows
    print(f"\\nDuplicate rows: {df_clean.duplicated().sum()}")

    # Convert data types if needed
    df_clean["age"] = df_clean["age"].astype(int)

    return df_clean


def data_analysis(df):
    \"\"\"Perform analysis on employee data.\"\"\"
    print("\\n=== Data Analysis ===\\n")

    # Salary statistics by department
    print("Average salary by department:")
    dept_salary = df.groupby("department")["salary"].mean()
    print(dept_salary)

    # Employee count by department
    print("\\nEmployee count by department:")
    dept_count = df["department"].value_counts()
    print(dept_count)

    # Experience analysis
    print(f"\\nAverage years of experience: {df['years_experience'].mean():.1f}")
    print(f"Min experience: {df['years_experience'].min()} years")
    print(f"Max experience: {df['years_experience'].max()} years")

    # Find high earners
    high_earners = df[df["salary"] > 85000]
    print(f"\\nEmployees earning > $85,000:")
    print(high_earners[["name", "salary", "department"]])


def data_transformation(df):
    \"\"\"Transform and derive new data.\"\"\"
    print("\\n=== Data Transformation ===\\n")

    df_transformed = df.copy()

    # Add new column: salary category
    df_transformed["salary_category"] = df_transformed["salary"].apply(
        lambda x: "High" if x >= 85000 else "Medium" if x >= 70000 else "Low"
    )

    # Add new column: experience level
    df_transformed["experience_level"] = df_transformed["years_experience"].apply(
        lambda x: "Senior" if x >= 7 else "Mid" if x >= 4 else "Junior"
    )

    print("Transformed data sample:")
    print(df_transformed[["name", "salary_category", "experience_level"]].head())

    return df_transformed


def export_data(df):
    \"\"\"Export DataFrame to different formats.\"\"\"
    print("\\n=== Exporting Data ===\\n")

    try:
        # Export to CSV
        df.to_csv("employees_export.csv", index=False)
        print("✓ Exported to CSV: employees_export.csv")

        # Export to JSON
        df.to_json("employees_export.json", orient="records", indent=2)
        print("✓ Exported to JSON: employees_export.json")

        # Export to Excel (if openpyxl is installed)
        try:
            df.to_excel("employees_export.xlsx", index=False)
            print("✓ Exported to Excel: employees_export.xlsx")
        except ImportError:
            print("(Excel export requires: pip install openpyxl)")

        # Show file info
        print(f"\\nExported files:")
        for filename in ["employees_export.csv", "employees_export.json"]:
            if os.path.exists(filename):
                size = os.path.getsize(filename)
                print(f"  {filename}: {size} bytes")

    except Exception as e:
        print(f"Error exporting data: {e}")


def filter_and_export(df):
    \"\"\"Filter data and export specific subsets.\"\"\"
    print("\\n=== Filtered Export ===\\n")

    try:
        # Filter high earners
        high_earners = df[df["salary"] > 80000]
        high_earners.to_csv("high_earners.csv", index=False)
        print(f"✓ Exported {len(high_earners)} high earners to: high_earners.csv")

        # Filter by department
        engineering = df[df["department"] == "Engineering"]
        engineering.to_csv("engineering_team.csv", index=False)
        print(f"✓ Exported {len(engineering)} engineers to: engineering_team.csv")

    except Exception as e:
        print(f"Error exporting filtered data: {e}")


def main():
    print("=== Reading and Writing Data Files ===\\n")

    # Create sample CSV
    create_sample_csv()

    # Read CSV file
    df = read_csv_file()

    if df is not None:
        # Data cleaning
        df_clean = data_cleaning(df)

        # Data analysis
        data_analysis(df)

        # Data transformation
        df_transformed = data_transformation(df)

        # Export data
        export_data(df)

        # Filter and export
        filter_and_export(df)

    print("\\n=== Data processing completed ===")


if __name__ == "__main__":
    main()

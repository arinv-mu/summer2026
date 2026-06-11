# Python: Execution & Virtual Environment Reference

## Virtual Environment Management

### Activate Environment
```bash
# Navigate to Python semester
cd 01-semester-python

# Activate (this is most common method)
source activate-env.sh

# Alternative: activate directly
source venv/bin/activate

# You'll see (venv) prefix in terminal when active
```

### Deactivate Environment
```bash
deactivate
```

### Check Python Version
```bash
# Should show Python 3.9+
python --version
python -c "import sys; print(sys.version)"
```

### Check Which Python
```bash
# Should show path in venv
which python
which pip
```

## Package Management with pip

### View Installed Packages
```bash
# List all packages
pip list

# Show details of one package
pip show package_name

# Check for outdated packages
pip list --outdated
```

### Install Packages
```bash
# Install single package
pip install package_name

# Install specific version
pip install package_name==1.2.3

# Install from requirements file
pip install -r requirements.txt

# Install multiple packages
pip install package1 package2 package3

# Install with extras
pip install package[extra1,extra2]
```

### Upgrade Packages
```bash
# Upgrade single package
pip install --upgrade package_name

# Upgrade pip itself
pip install --upgrade pip
```

### Uninstall Packages
```bash
# Remove package
pip uninstall package_name

# Remove without confirmation
pip uninstall -y package_name

# Uninstall all packages in requirements
pip uninstall -r requirements.txt
```

### Create Requirements File
```bash
# Export current environment
pip freeze > requirements.txt

# Create minimal requirements (only direct dependencies)
pip install pipdeptree  # optional
pipdeptree --graph-output=png
```

## Running Python

### Execute a Script
```bash
# Run Python file
python script.py

# Run with arguments
python script.py arg1 arg2

# Run module as script
python -m module_name
```

### Interactive Python REPL
```bash
# Start interactive mode
python

# Inside REPL
>>> import requests
>>> print("Hello")
>>> exit()

# Exit with Ctrl+D or Ctrl+Z (Windows)
```

### Run Python Code Directly
```bash
# Execute code string
python -c "print('Hello')"

# Execute code from stdin
echo "print(2+2)" | python
```

### Debugging with pdb (Python Debugger)

```python
# Add breakpoint in code
import pdb; pdb.set_trace()  # Python 3.6+
breakpoint()  # Python 3.7+ (preferred)
```

**pdb Commands**:
```
(Pdb) l      - List code
(Pdb) n      - Next line
(Pdb) s      - Step into function
(Pdb) c      - Continue execution
(Pdb) p variable  - Print variable
(Pdb) pp variable - Pretty print
(Pdb) b 10   - Set breakpoint at line 10
(Pdb) w      - Show stack
(Pdb) h      - Help
(Pdb) q      - Quit
```

### Running with Python Command Options
```bash
# Optimize (remove assertions)
python -O script.py

# No buffering (for debugging)
python -u script.py

# Warnings as errors
python -Wall script.py

# Show all imported modules
python -v script.py
```

## Code Formatting & Linting

### Black (Code Formatter)
```bash
# Format a file
black script.py

# Format directory
black src/

# Check formatting (no changes)
black --check script.py

# Configure in pyproject.toml
[tool.black]
line-length = 100
target-version = ['py39']
```

### pylint (Code Quality)
```bash
# Check code quality
pylint script.py

# Generate report
pylint script.py > report.txt

# Configuration in .pylintrc
[MASTER]
max-line-length = 100
```

### pytest (Testing)
```bash
# Run all tests
pytest

# Run specific file
pytest test_file.py

# Run specific test
pytest test_file.py::test_function

# Show print statements
pytest -s

# Verbose output
pytest -v

# Stop on first failure
pytest -x

# Run last failed
pytest --lf

# Measure coverage
pip install pytest-cov
pytest --cov=src
```

## Important Installed Packages

### Current Environment (01-semester-python)
```
requests          # HTTP library
beautifulsoup4    # HTML parsing
pandas            # Data analysis
numpy             # Numerical computing
pytest            # Testing framework
pylint            # Code quality
black             # Code formatter
ipython           # Enhanced REPL
ipdb              # Enhanced debugger
```

### Usage Examples
```python
# requests
import requests
response = requests.get('https://api.example.com')
data = response.json()

# BeautifulSoup
from bs4 import BeautifulSoup
soup = BeautifulSoup(html, 'html.parser')
tags = soup.find_all('div')

# pandas
import pandas as pd
df = pd.read_csv('data.csv')
df[df['age'] > 30]

# numpy
import numpy as np
arr = np.array([1, 2, 3])
arr * 2

# pytest
def test_function():
    assert 2 + 2 == 4
```

## Troubleshooting

### Module Not Found
```bash
# Check if module is installed
pip list | grep module_name

# If not found, install it
pip install module_name

# Check Python path
python -c "import sys; print(sys.path)"
```

### Wrong Python Version
```bash
# Check Python version
python --version

# Make sure venv is activated
which python  # Should show venv path

# Activate venv
source activate-env.sh
```

### pip Permission Denied
```bash
# Don't use sudo with pip!
# Instead, make sure venv is activated
source activate-env.sh
pip install package_name
```

### Import Errors
```bash
# Make sure module is installed
pip install module_name

# Check PYTHONPATH
python -c "import sys; print(sys.path)"

# Add to path if needed
export PYTHONPATH="${PYTHONPATH}:/path/to/module"
```

---

**Next**: When you encounter errors, check [03-DEBUGGING-GUIDE.md](03-DEBUGGING-GUIDE.md)!

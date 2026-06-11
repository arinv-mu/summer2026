# Environment Setup Scripts

This document explains the environment activation and setup scripts located in each semester folder.

---

## File Locations

Each semester folder contains a language-specific environment setup script:

```
📂 01-semester-python/
   ├── activate-env.sh              # Python venv activation
   ├── venv/                        # Virtual environment
   ├── requirements.txt
   ├── 00-SETUP.md
   └── ...

📂 02-semester-java/
   ├── setup-env.sh                 # Java/Gradle setup
   ├── build.gradle
   ├── 00-SETUP.md
   └── ...

📂 03-semester-c/
   ├── setup-env.sh                 # C build environment
   ├── CMakeLists.txt
   ├── build/                       # (Created on first build)
   ├── 00-SETUP.md
   └── ...

📂 04-semester-cpp/
   ├── setup-env.sh                 # C++ build environment
   ├── CMakeLists.txt
   ├── build/                       # (Created on first build)
   ├── 00-SETUP.md
   └── ...
```

---

## Why This Structure?

### 1. **Semester Folder Root** (Most Appropriate Location)

Each environment script is placed **directly in the semester root** (`01-semester-python/`, `02-semester-java/`, etc.) for these reasons:

#### ✅ **Discoverability**
- When a user opens a semester folder, the setup script is immediately visible
- No need to search nested directories for setup instructions
- Follows the principle of co-location: keep related files together

#### ✅ **Consistency with Build Configuration**
- Python: `requirements.txt` lives at semester root
- Java: `build.gradle` lives at semester root
- C: `CMakeLists.txt` lives at semester root
- C++: `CMakeLists.txt` lives at semester root
- Environment scripts follow the same pattern

#### ✅ **Easy to Execute**
```bash
cd 01-semester-python
source activate-env.sh          # Simple, one-command activation
```

#### ✅ **Isolation Per Language**
- Each semester has **its own environment script** tailored to that language
- No cross-language confusion
- Supports future expansion (e.g., different Python versions in different semesters)

#### ✅ **Better Than Root Repo Level**
- ❌ NOT at `/Users/arinvashistha/summer2026/activate.sh` because:
  - Duplicates functionality (each semester has different environment)
  - Creates confusion about which activation to use
  - Violates separation of concerns

- ❌ NOT in a shared `scripts/` folder because:
  - Requires deeper navigation
  - Harder to discover
  - Defeats the purpose of having semester-specific setup

#### ✅ **Better Than Deep Nesting**
- ❌ NOT in `01-semester-python/scripts/activate-env.sh` because:
  - Adds unnecessary hierarchy
  - Current location is simpler (semester root)
  - For now, keep it at root level

---

## Usage

### Semester 1 - Python

```bash
cd 01-semester-python
source activate-env.sh

# Output:
# ✅ Virtual environment activated!
#    Location: /Users/arinvashistha/summer2026/01-semester-python/venv
#    Python: Python 3.9.6
#    Pip: 26.0.1
#
# To deactivate: deactivate
```

### Semester 2 - Java

```bash
cd 02-semester-java
source setup-env.sh

# Output:
# ✅ Java/Gradle environment configured!
#    Location: /Users/arinvashistha/summer2026/02-semester-java
#    Java: openjdk version "21" 2023-09-19
#    Gradle: Gradle 8.x
```

### Semester 3 - C

```bash
cd 03-semester-c
source setup-env.sh

# Output:
# ✅ C build environment configured!
#    Location: /Users/arinvashistha/summer2026/03-semester-c
#    Clang: Apple clang version 15.0.0
#    CMake: cmake version 3.20+
#    Make: GNU Make 3.81
#    📁 Created build directory
```

### Semester 4 - C++

```bash
cd 04-semester-cpp
source setup-env.sh

# Output:
# ✅ C++ build environment configured!
#    Location: /Users/arinvashistha/summer2026/04-semester-cpp
#    Clang++: Apple clang version 15.0.0
#    CMake: cmake version 3.20+
#    Make: GNU Make 3.81
#    📁 Created build directory
```

---

## Script Features

### Python (`activate-env.sh`)
- ✅ Activates Python virtual environment
- ✅ Verifies venv exists
- ✅ Shows activation details (location, Python version, pip version)
- ✅ Provides deactivation command

### Java (`setup-env.sh`)
- ✅ Verifies Java 21 is installed
- ✅ Verifies Gradle is installed
- ✅ Shows build commands
- ✅ No activation needed (Java tools are global)

### C (`setup-env.sh`)
- ✅ Verifies Clang compiler is installed
- ✅ Verifies CMake is installed
- ✅ Verifies Make is installed
- ✅ Creates `build/` directory automatically
- ✅ Shows build and debug commands

### C++ (`setup-env.sh`)
- ✅ Verifies Clang++ compiler is installed
- ✅ Verifies CMake is installed
- ✅ Verifies Make is installed
- ✅ Creates `build/` directory automatically
- ✅ Shows build and debug commands

---

## File Permissions

All scripts are **executable** (`chmod +x`):

```bash
-rwxr-xr-x  activate-env.sh      # Python (executable)
-rwxr-xr-x  setup-env.sh         # Java, C, C++ (executable)
```

---

## Important Notes

### ⚠️ Always Use `source` or `.`

```bash
# ✅ CORRECT - Activates environment in current shell
source activate-env.sh
. activate-env.sh

# ❌ WRONG - Runs in subshell, environment not persisted
bash activate-env.sh
sh activate-env.sh
./activate-env.sh
```

### ⚠️ Environment Variables Not Exported

Scripts set up environments for the **current shell session only**. To use in new terminal:

```bash
# Terminal 1
cd 01-semester-python
source activate-env.sh
python3 my_script.py

# Terminal 2 (new terminal - must re-activate)
cd 01-semester-python
source activate-env.sh
python3 another_script.py
```

### ⚠️ Deactivation (Python Only)

For Python, deactivate when done:

```bash
deactivate
```

For Java/C/C++, no deactivation needed (tools remain available globally).

---

## Future Enhancements

Potential improvements (not yet implemented):

1. **Auto-detection**: Automatically activate environment when opening folder
   - Use `.vscode/settings.json` for VS Code
   - Use `direnv` for terminal auto-activation

2. **Consolidated Root Script**: Create `setup-all.sh` at repo root
   - Run once to setup all semesters
   - Verify all dependencies

3. **Version Control**: Add scripts to `.gitignore` if they become auto-generated
   - Currently tracked in git for reproducibility

---

## Troubleshooting

### Python Environment Not Activating

```bash
# Error: Virtual environment not found
# Solution:
cd 01-semester-python
python3 -m venv venv
source activate-env.sh
```

### Java Not Found

```bash
# Error: Java not installed
# Solution:
brew install openjdk@21
source setup-env.sh
```

### Gradle Not Found

```bash
# Error: Gradle not installed
# Solution:
brew install gradle
source setup-env.sh
```

### CMake/Make Not Found (C/C++)

```bash
# Error: CMake not installed
# Solution:
brew install cmake
source setup-env.sh

# If Make missing:
xcode-select --install
source setup-env.sh
```

---

**Last Updated**: June 10, 2026
**Scripts Created**: 4 (Python, Java, C, C++)
**All Scripts Executable**: ✅ Yes

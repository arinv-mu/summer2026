# PLAN 2: Installation of Resources in VS Code

**Date**: June 10, 2026  
**Target**: macOS (Mac Air)  
**Objective**: Complete setup of VS Code with toolchains, extensions, and configurations for C, C++, Java, Python

---

## TL;DR - Installation Flow

**Xcode CLT → Homebrew → Language Toolchains → VS Code Extensions → Workspace Configuration → Test**

Estimated time: 45-90 minutes (depending on internet speed and system state)

---

## Phase 1: System Prerequisites (5-15 minutes)

### Step 1a: Check/Install Xcode Command Line Tools

**Check if already installed:**
```bash
xcode-select -p
```

**Expected output** (if installed): `/Applications/Xcode.app/Contents/Developer` or `/Library/Developer/CommandLineTools`

**If not installed, install now:**
```bash
xcode-select --install
```
- A popup will appear
- Click "Install" and wait for completion (~5-10 minutes on Mac Air)
- Verify with: `xcode-select --version`

**Verification Checklist:**
- [ ] `xcode-select --version` returns version number
- [ ] `clang --version` returns Apple Clang version

---

### Step 1b: Install Homebrew (if not already installed)

**Check if installed:**
```bash
brew --version
```

**If not installed, install now:**
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

**After installation, add to PATH** (if prompted):
```bash
export PATH="/opt/homebrew/bin:$PATH" >> ~/.zshrc
source ~/.zshrc
```

**Verification:**
- [ ] `brew --version` returns version number (e.g., `Homebrew 4.0.0`)
- [ ] `which brew` returns `/opt/homebrew/bin/brew`

---

## Phase 2: Install Language Toolchains (15-30 minutes)

### Step 2a: C/C++ Compiler & Build Tools

**Clang** (already included with Xcode CLT):
```bash
# Verify it's available
clang --version
```

**Expected output**: `Apple clang version X.X.X` with LLVM version

**Install CMake** (build system for C/C++):
```bash
brew install cmake
cmake --version
```

**Install Make** (if not already available):
```bash
brew install make
make --version
```

**Verification Checklist:**
- [ ] `clang --version` shows Apple Clang
- [ ] `cmake --version` shows version 3.22+
- [ ] `make --version` shows GNU Make

---

### Step 2b: Java (OpenJDK 21 LTS)

**Install OpenJDK 21:**
```bash
brew install openjdk@21
```

**Set it as the default Java:**
```bash
ln -sfn /opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk /Library/Java/JavaVirtualMachines/openjdk-21.jdk
```

**Add to PATH** (if not automatic):
```bash
export PATH="/opt/homebrew/opt/openjdk@21/bin:$PATH" >> ~/.zshrc
source ~/.zshrc
```

**Install Gradle** (build tool for Java):
```bash
brew install gradle
gradle --version
```

**Verification Checklist:**
- [ ] `java -version` shows OpenJDK 21
- [ ] `javac -version` shows OpenJDK 21
- [ ] `gradle --version` shows version 8.0+

---

### Step 2c: Python (3.12 recommended)

**Install Python 3.12:**
```bash
brew install python@3.12
```

**Set as default:**
```bash
brew link python@3.12 --force
python3 --version
```

**Expected output**: `Python 3.12.X`

**Upgrade pip:**
```bash
pip3 install --upgrade pip setuptools wheel
```

**Install commonly used packages** (optional, can do per-project):
```bash
pip3 install numpy pandas matplotlib pytest
```

**Verification Checklist:**
- [ ] `python3 --version` shows Python 3.12+
- [ ] `pip3 --version` shows pip with Python 3.12
- [ ] `which python3` shows `/opt/homebrew/bin/python3`

---

## Phase 3: Install VS Code Extensions (10-20 minutes)

### Prerequisites
- VS Code should be installed (download from https://code.visualstudio.com)
- Or install via Homebrew: `brew install --cask visual-studio-code`

### Extension List

| # | Extension ID | Name | Purpose |
|---|--|---|--|
| 1 | `ms-vscode.cpptools` | C/C++ (Microsoft) | IntelliSense, debugging, code navigation |
| 2 | `ms-vscode.makefile-tools` | CMake Tools | CMake/Makefile support |
| 3 | `vscjava.vscode-java-pack` | Extension Pack for Java | All Java extensions (language server, debugger, test runner, Maven/Gradle) |
| 4 | `ms-python.python` | Python (Microsoft) | Full Python support, Pylance |
| 5 | `ms-python.debugpy` | Python Debugger | Enhanced Python debugging |
| 6 | `eamodio.gitlens` | GitLens | Git history, blame, insights |
| 7 | `donjayamanne.githistory` | Git History | Browse commit history |
| 8 | `ms-vscode.cpptools-extension-pack` | C/C++ Extension Pack | Additional C++ utilities |
| 9 | `formulahendry.code-runner` | Code Runner | Quick execution for any language |
| 10 | `sonarsource.sonarlint-vscode` | SonarLint | Static code analysis |
| 11 | `wayou.vscode-todo-highlight` | TODO Highlight | Highlight TODOs/FIXMEs |

### Installation Methods

**Method 1: Via GUI (Recommended for beginners)**
1. Open VS Code
2. Click Extensions icon (Cmd+Shift+X)
3. Search each extension by name or ID
4. Click "Install"

**Method 2: Via Command Line**
```bash
# Install one extension
code --install-extension ms-vscode.cpptools

# Install all at once (copy-paste):
code --install-extension ms-vscode.cpptools
code --install-extension ms-vscode.makefile-tools
code --install-extension vscjava.vscode-java-pack
code --install-extension ms-python.python
code --install-extension ms-python.debugpy
code --install-extension eamodio.gitlens
code --install-extension donjayamanne.githistory
code --install-extension ms-vscode.cpptools-extension-pack
code --install-extension formulahendry.code-runner
code --install-extension sonarsource.sonarlint-vscode
code --install-extension wayou.vscode-todo-highlight
```

**Verification Checklist:**
- [ ] Open VS Code Extensions panel (Cmd+Shift+X)
- [ ] All 11 extensions show as installed
- [ ] No extensions have error badges (red X or alert icon)

---

## Phase 4: VS Code Workspace Configuration (10-15 minutes)

### Step 4a: Create `.vscode/settings.json`

**Create directory:**
```bash
mkdir -p /Users/arinvashistha/summer2026/.vscode
```

**Create file:** `summer2026/.vscode/settings.json`

**Content:**
```json
{
  "editor.fontSize": 13,
  "editor.tabSize": 4,
  "editor.insertSpaces": true,
  "editor.rulers": [80, 100],
  "editor.formatOnSave": true,
  "editor.formatOnPaste": true,
  "editor.wordWrap": "on",
  
  "[c]": {
    "editor.defaultFormatter": "ms-vscode.cpptools",
    "editor.tabSize": 4,
    "editor.formatOnSave": true
  },
  "[cpp]": {
    "editor.defaultFormatter": "ms-vscode.cpptools",
    "editor.tabSize": 4,
    "editor.formatOnSave": true
  },
  "[java]": {
    "editor.defaultFormatter": "redhat.java",
    "editor.tabSize": 4,
    "editor.formatOnSave": true
  },
  "[python]": {
    "editor.defaultFormatter": "ms-python.python",
    "editor.tabSize": 4,
    "editor.formatOnSave": true,
    "python.formatting.provider": "black",
    "python.linting.pylintEnabled": true,
    "python.linting.enabled": true
  },
  
  "files.exclude": {
    "**/__pycache__": true,
    "**/*.pyc": true,
    "**/target": true,
    "**/.gradle": true,
    "**/build": true,
    "**/*.o": true,
    "**/*.a": true,
    ".DS_Store": true
  },
  
  "search.exclude": {
    "**/.pytest_cache": true,
    "**/node_modules": true,
    "**/build": true,
    "**/target": true,
    "**/.gradle": true
  },
  
  "C_Cpp.default.compilerPath": "/usr/bin/clang",
  "C_Cpp.default.cStandard": "c17",
  "C_Cpp.default.cppStandard": "c++20",
  "C_Cpp.default.intelliSenseEngine": "Tag Parser",
  
  "python.defaultInterpreterPath": "${workspaceFolder}/python/.venv/bin/python",
  "python.linting.pylintArgs": ["--max-line-length=100"],
  
  "java.project.outputPath": "${workspaceFolder}/java/target"
}
```

---

### Step 4b: Create `.vscode/launch.json`

**Create file:** `summer2026/.vscode/launch.json`

**Content:**
```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "C Debug (lldb)",
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/c/build/program",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}/c",
      "environment": [],
      "externalConsole": false,
      "MIMode": "lldb",
      "preLaunchTask": "build-c-cmake"
    },
    {
      "name": "C++ Debug (lldb)",
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/cpp/build/program",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}/cpp",
      "environment": [],
      "externalConsole": false,
      "MIMode": "lldb",
      "preLaunchTask": "build-cpp-cmake"
    },
    {
      "name": "Java Debug",
      "type": "java",
      "name": "Launch Main",
      "request": "launch",
      "mainClass": "",
      "projectName": "",
      "cwd": "${workspaceFolder}/java"
    },
    {
      "name": "Python Debug",
      "type": "python",
      "request": "launch",
      "program": "${file}",
      "console": "integratedTerminal",
      "cwd": "${workspaceFolder}/python"
    }
  ]
}
```

---

### Step 4c: Create `.vscode/tasks.json`

**Create file:** `summer2026/.vscode/tasks.json`

**Content:**
```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "build-c-cmake",
      "type": "shell",
      "command": "bash",
      "args": [
        "-c",
        "cd ${workspaceFolder}/c && cmake -B build -S . && cmake --build build"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": ["$gcc"],
      "presentation": {
        "echo": true,
        "reveal": "always",
        "focus": false,
        "panel": "shared"
      }
    },
    {
      "label": "build-cpp-cmake",
      "type": "shell",
      "command": "bash",
      "args": [
        "-c",
        "cd ${workspaceFolder}/cpp && cmake -B build -S . && cmake --build build"
      ],
      "group": {
        "kind": "build",
        "isDefault": false
      },
      "problemMatcher": ["$gcc"],
      "presentation": {
        "echo": true,
        "reveal": "always",
        "focus": false,
        "panel": "shared"
      }
    },
    {
      "label": "build-java-gradle",
      "type": "shell",
      "command": "bash",
      "args": [
        "-c",
        "cd ${workspaceFolder}/java && gradle build"
      ],
      "group": {
        "kind": "build",
        "isDefault": false
      },
      "problemMatcher": [],
      "presentation": {
        "echo": true,
        "reveal": "always",
        "focus": false,
        "panel": "shared"
      }
    },
    {
      "label": "run-python",
      "type": "shell",
      "command": "python3",
      "args": ["${file}"],
      "group": {
        "kind": "test",
        "isDefault": false
      },
      "presentation": {
        "echo": true,
        "reveal": "always",
        "focus": true,
        "panel": "shared"
      }
    },
    {
      "label": "test-java",
      "type": "shell",
      "command": "bash",
      "args": [
        "-c",
        "cd ${workspaceFolder}/java && gradle test"
      ],
      "group": {
        "kind": "test",
        "isDefault": false
      },
      "presentation": {
        "echo": true,
        "reveal": "always",
        "focus": false,
        "panel": "shared"
      }
    }
  ]
}
```

**Verification Checklist:**
- [ ] `.vscode/settings.json` exists with proper JSON syntax
- [ ] `.vscode/launch.json` exists with debugging configurations
- [ ] `.vscode/tasks.json` exists with build tasks
- [ ] Open VS Code and verify no error messages in Output panel
- [ ] Open a C/C++ file and verify IntelliSense works (Cmd+Space shows suggestions)

---

## Phase 5: Test Installation (10-15 minutes)

### Test 5a: C Program

**Create file:** `summer2026/c/hello.c`
```c
#include <stdio.h>

int main() {
    printf("Hello, C!\n");
    return 0;
}
```

**Compile and run:**
```bash
cd /Users/arinvashistha/summer2026
gcc c/hello.c -o c/hello
./c/hello
```

**Expected output:** `Hello, C!`

---

### Test 5b: C++ Program

**Create file:** `summer2026/cpp/hello.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, C++" << std::endl;
    return 0;
}
```

**Compile and run:**
```bash
clang++ cpp/hello.cpp -o cpp/hello
./cpp/hello
```

**Expected output:** `Hello, C++`

---

### Test 5c: Java Program

**Create file:** `summer2026/java/Hello.java`
```java
public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello, Java");
    }
}
```

**Compile and run:**
```bash
javac java/Hello.java
java -cp java Hello
```

**Expected output:** `Hello, Java`

---

### Test 5d: Python Program

**Create file:** `summer2026/python/hello.py`
```python
print("Hello, Python")
```

**Run:**
```bash
python3 python/hello.py
```

**Expected output:** `Hello, Python`

---

## Final Verification Checklist

- [ ] All four "Hello World" programs compile and run successfully
- [ ] VS Code properly syntax-highlights all four file types
- [ ] Open each file in VS Code and verify IntelliSense works (Cmd+Space)
- [ ] Set a breakpoint (F9) on a line → red dot appears
- [ ] Run task: Cmd+Shift+B → shows available build tasks
- [ ] Extensions panel (Cmd+Shift+X) shows 11+ extensions with no errors
- [ ] `.vscode/` folder contains exactly 3 files: `settings.json`, `launch.json`, `tasks.json`

---

## Troubleshooting

| Issue | Solution |
|-------|----------|
| `clang: command not found` | Run `xcode-select --install` and wait for completion |
| `brew: command not found` | Reinstall Homebrew: `/bin/bash -c "$(curl -fsSL ...)` |
| `java: command not found` | Run `brew install openjdk@21` and set PATH |
| `python3: command not found` | Run `brew install python@3.12` |
| VS Code shows red squiggles on C/C++ | Reload window: Cmd+Shift+P → "Developer: Reload Window" |
| Extensions won't install | Restart VS Code, then retry from Extensions panel |
| Python IntelliSense not working | Check `python.defaultInterpreterPath` in settings.json |

---

## Next Steps

1. Complete all 5 phases in order
2. Run all 4 test programs
3. Verify the checklist items
4. Proceed to PLAN 3 (Learning Journey)

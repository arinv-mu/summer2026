#!/bin/bash
# Build Environment Setup for Semester 3 (C)
# This script prepares the C build environment for Semester 3
#
# Usage:
#   source setup-env.sh
#   OR
#   . setup-env.sh
#
# DO NOT run with: bash setup-env.sh (it won't work - must use 'source')

set -e

# Get the directory where this script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Verify C compiler is installed
if ! command -v clang &> /dev/null; then
    echo "❌ Error: Clang C compiler not installed"
    echo "Please install Xcode Command Line Tools: xcode-select --install"
    return 1 2>/dev/null || exit 1
fi

# Verify CMake is installed
if ! command -v cmake &> /dev/null; then
    echo "❌ Error: CMake not installed"
    echo "Please install CMake: brew install cmake"
    return 1 2>/dev/null || exit 1
fi

# Verify Make is installed
if ! command -v make &> /dev/null; then
    echo "❌ Error: Make not installed"
    echo "Make should come with Xcode CLT, try: xcode-select --install"
    return 1 2>/dev/null || exit 1
fi

# Create build directory if it doesn't exist
if [ ! -d "$SCRIPT_DIR/build" ]; then
    mkdir -p "$SCRIPT_DIR/build"
    echo "📁 Created build directory"
fi

# Success message
echo "✅ C build environment configured!"
echo "   Location: $SCRIPT_DIR"
echo "   Clang: $(clang --version | head -1)"
echo "   CMake: $(cmake --version | head -1)"
echo "   Make: $(make --version | head -1)"
echo ""
echo "Build commands:"
echo "  cd build && cmake .. && make  - Build the project"
echo "  ./build/program_name          - Run compiled program"
echo "  valgrind ./program_name       - Check for memory leaks"

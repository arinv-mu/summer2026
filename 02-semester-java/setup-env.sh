#!/bin/bash
# Build Environment Setup for Semester 2 (Java)
# This script prepares the Java/Gradle build environment for Semester 2
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

# Verify Java is installed
if ! command -v java &> /dev/null; then
    echo "❌ Error: Java not installed"
    echo "Please install OpenJDK 21: brew install openjdk@21"
    return 1 2>/dev/null || exit 1
fi

# Verify Gradle is installed
if ! command -v gradle &> /dev/null; then
    echo "❌ Error: Gradle not installed"
    echo "Please install Gradle: brew install gradle"
    return 1 2>/dev/null || exit 1
fi

# Success message
echo "✅ Java/Gradle environment configured!"
echo "   Location: $SCRIPT_DIR"
echo "   Java: $(java -version 2>&1 | grep -i version | head -1)"
echo "   Gradle: $(gradle --version | head -1)"
echo ""
echo "Build commands:"
echo "  gradle build  - Build the project"
echo "  gradle test   - Run tests"
echo "  gradle run    - Run the application"

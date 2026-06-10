#!/bin/bash
# Activate Python Virtual Environment for Semester 1
# This script activates the Python 3.12 virtual environment for Semester 1
# 
# Usage:
#   source activate-env.sh
#   OR
#   . activate-env.sh
#
# DO NOT run with: bash activate-env.sh (it won't work - must use 'source')

set -e

# Get the directory where this script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
VENV_PATH="$SCRIPT_DIR/venv"

# Check if venv exists
if [ ! -d "$VENV_PATH" ]; then
    echo "❌ Error: Virtual environment not found at $VENV_PATH"
    echo ""
    echo "Please create it first with:"
    echo "  python3 -m venv venv"
    return 1 2>/dev/null || exit 1
fi

# Activate the virtual environment
source "$VENV_PATH/bin/activate"

# Verify activation
if [ -z "$VIRTUAL_ENV" ]; then
    echo "❌ Error: Failed to activate virtual environment"
    return 1 2>/dev/null || exit 1
fi

# Success message
echo "✅ Virtual environment activated!"
echo "   Location: $VIRTUAL_ENV"
echo "   Python: $(python3 --version)"
echo "   Pip: $(pip --version | cut -d' ' -f2)"
echo ""
echo "To deactivate: deactivate"

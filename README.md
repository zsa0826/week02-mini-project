# Temperature Conversion App

## Purpose
Converts a temperature between Celsius and Fahrenheit based on a direction code.

## Input/Output Contract
Input: a direction code (C2F or F2C) followed by a numeric temperature, e.g. C2F 0
Output: Result: <value> F   or   Result: <value> C
Invalid direction or non-numeric input produces: Invalid input

## Build Commands
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app

## Run Commands
./build/app
Then type a direction and a temperature, e.g. C2F 0

## Example Output
Input: C2F 0
Output: Result: 32 F

Input: F2C 32
Output: Result: 0 C

## Automated Testing
Run: bash test.sh
Compiles the program, runs all four fixtures in tests/, and compares output with diff.
GitHub Actions runs this automatically on every push and pull request.

## Test Scenarios
Test 1: 0 C converts to 32 F
Test 2: 32 F converts to 0 C
Test 3: An unsupported direction (X2Y) produces Invalid input
Test 4 (edge case): A negative temperature, -40 C, converts to -40 F

## Limitations
- Only supports exactly two space-separated tokens (direction, then number).
- No support for Kelvin or other temperature scales.
- Does not round output to a fixed number of decimal places.

## AI-Use Disclosure
Claude (Anthropic) was used to help design, write, and debug this program,
its tests, and this documentation, working step by step with the author.

## Debugging Reflection
The main challenge was GitHub SSH authentication, resolved by generating a new
SSH key and registering it with GitHub instead of relying on cached HTTPS
credentials. YAML indentation in the GitHub Actions workflow also required
care, since incorrect spacing under jobs: and steps: silently breaks the file.

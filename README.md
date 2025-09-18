# 3136. Valid Word

C++ Solution to an easy problem in [leetcode.com](https://leetcode.com/problems/valid-word)

## Problem Description

This program checks whether a given word is valid according to specific rules.

### Rules for a Valid Word

A word is considered valid if it meets ALL of the following criteria:

1. Must be at least 3 characters long
2. Must contain at least one vowel (a, e, i, o, u - case insensitive)
3. Must contain at least one consonant
4. Can only contain alphanumeric characters (A-Z, a-z, 0-9)

## Getting Started

### Building the Program

To build the program, use the provided build script:

```bash
.\build.bat
```

This will:

1. Create an `out` directory if it doesn't exist
2. Compile the source files into an executable named `solve.exe`
3. Create an test executable to test the code with the same test cases in leetcode.
### Running Tests

To run the test cases:

```bash
.\test\test.exe
```

## Usage Examples

You can run the program directly with one or more words as arguments:

```bash
.\out\solve.exe 234Adas b3 a3$e
```

Example output:

```
true
false
false
```

## Project Structure

- `src/`
  - `main.cpp` - Entry point and command-line argument handling
  - `solution.cpp` - Implementation of the word validation logic
  - `solution.h` - Header file with class definition
- `test/`
  - `test.cpp` - Test cases for the solution
- `build.bat` - Build script for compiling the program


### Remote Repository

[github.com](https://github.com/HoneyHanny/IsValid)
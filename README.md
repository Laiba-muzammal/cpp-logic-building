# 🚀 C++ Algorithms Collection

A collection of fundamental algorithms and programs implemented in C++.

---

## 📋 Table of Contents
1. [🔢 Number Reversal](#number-reversal)
2. [🐰 Fibonacci Sequence](#fibonacci-sequence)
3. [🔲 2D Array Operations](#2d-array-operations)
4. [🔊 Vowel Checker](#vowel-checker)
5. [🏆 Largest Number Finder](#largest-number-finder)
6. [🔢 Decimal to Binary Converter](#decimal-to-binary-converter)

---

## 🔢 Number Reversal
**File**: `number_reversal.cpp`  
Reverses the digits of a given number.

✨ **Features**:
- Handles positive integers
- Preserves leading zeros in the reversed number
- Includes input validation

**Example**:
```bash
Enter a number: 1234
The reversed number is: 4321
```

---

## � Fibonacci Sequence
File: fibonacci.cpp
Generates Fibonacci sequence up to n terms.

✨ Features:

Both iterative and recursive implementations

Handles edge cases (0 and 1 terms)

Optimized for performance

Example:

```
Enter the number of terms: 7
Fibonacci Series up to 7 terms:
0 1 1 2 3 5 8
```

---

## 🔲 2D Array Operations
Files:

matrix_search_replace.cpp

matrix_find_largest.cpp

✨ Features:

Dynamic matrix size handling

Search and replace functionality

Finds largest and second largest elements

Matrix transpose operation

Example:

```
Enter matrix dimensions (rows columns): 3 3
Enter elements:
1 2 3
4 5 6
7 8 9
Largest element: 9 at position (2,2)
```

---

## 🔊 Vowel Checker
File: vowel_checker.cpp
Checks if an input character is a vowel.

✨ Features:

Handles both uppercase and lowercase

Includes y as optional vowel

Input validation for single characters

Example:
```
Enter a character: E
'E' is a vowel.
```

---

## 🏆 Largest Number Finder
File: largest_number.cpp
Finds the largest among three numbers.

✨ Features:

Handles equal numbers case

Extended to handle N numbers

Template version for different data types

Example:

```
Enter numbers (space separated): 5 9 2 7 1
The largest number is: 9
```

---

## 🔢 Decimal to Binary Converter
File: decimal_to_binary.cpp
Converts decimal numbers to binary representation.

✨ Features:

Step-by-step conversion display

Handles both positive and negative integers

Includes recursive implementation

Example:
```
Enter a decimal number: 13
Conversion steps:
13 ÷ 2 = 6 remainder 1
6 ÷ 2 = 3 remainder 0
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1

13 in decimal = 1101 in binary
```

---

## 🛠️ How to Run
### Compile any program:

```
g++ -std=c++17 -Wall -Wextra filename.cpp -o output
```

#### Run the executable:
```
./output
```

#### For testing:
```
g++ -std=c++17 -g test_file.cpp -o test_output && ./test_output
```

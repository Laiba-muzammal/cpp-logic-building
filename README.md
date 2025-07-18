# C++ Algorithms Collection

A collection of fundamental algorithms and programs implemented in C++.

---

## Table of Contents
1. [Number Reversal](#number-reversal)
2. [Fibonacci Sequence](#fibonacci-sequence)
3. [2D Array Operations](#2d-array-operations)
4. [Vowel Checker](#vowel-checker)
5. [Largest Number Finder](#largest-number-finder)
6. [Decimal to Binary Converter](#decimal-to-binary-converter)

---

## Number Reversal
**File**: `number_reversal.cpp`  
Reverses the digits of a given number.

**Features**:
- Handles positive integers
- Preserves leading zeros in the reversed number

**Example**:
```bash
Enter a number: 1234
The reversed number is: 4321
```

---

## Fibonacci Sequence
**File**: `fibonacci.cpp`  
Generates Fibonacci sequence up to n terms.

**Features**:
- Recursive implementation
- Handles edge cases (0 and 1 terms)

**Example**:
```bash
Enter the number of terms: 7
Fibonacci Series up to 7 terms:
0 1 1 2 3 5 8
```

---

## 2D Array Operations
**Files**:
- `matrix_search_replace.cpp`
- `matrix_find_largest.cpp`

**Features**:
- 3x3 and 4x4 matrix implementations
- Search and replace functionality
- Finds largest and second largest elements

**Example**:
```bash
Enter elements of the 2-dimensional array (9 integers):
...
Modified array:
1 2 3
4 5 6
7 8 9
```

---

## Vowel Checker
**File**: `vowel_checker.cpp`  
Checks if an input character is a vowel.

**Features**:
- Handles both uppercase and lowercase
- Covers all vowel cases

**Example**:
```bash
Enter an alphabet: E
E is a vowel.
```

---

## Largest Number Finder
**File**: `largest_number.cpp`  
Finds the largest among three numbers.

**Features**:
- Handles equal numbers case
- Simple conditional logic

**Example**:
```bash
Enter 3 numbers: 5 9 2
9 is the largest number
```

---

## Decimal to Binary Converter
**File**: `decimal_to_binary.cpp`  
Converts decimal numbers to binary representation.

**Features**:
- Step-by-step conversion display
- Handles positive integers

**Example**:

```bash
Enter a decimal number: 13
Step 1: 13/2, Remainder = 1, Quotient = 6
...
13 in decimal = 1101 in binary
```

---

## How to Run
1. Compile any program:
   ```bash
   g++ filename.cpp -o output
   ```
2. Run the executable:
   ```bash
   ./output
   ```

---

## Contribution
Feel free to contribute by:
- Adding more algorithms
- Improving existing implementations
- Adding test cases

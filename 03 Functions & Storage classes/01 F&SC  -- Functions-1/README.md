# C Functions & Storage Classes - Lecture 01

## Overview

This repository contains C programming examples and exercises focused on **Functions and Storage Classes**, based on Parakram GATE 2024 Computer Science Weekday lectures (Hinglish). The examples demonstrate fundamental concepts of function declaration, definition, prototyping, and activation records in C.

## Topics Covered

- Function basics and calling conventions
- Function prototyping and forward declaration
- Implicit function declaration (old C standard)
- Activation records and function execution flow
- Parameter passing mechanisms
- Compilation behavior with and without prototypes

## File Structure

### 00_empty_template.c
**Purpose:** Basic empty C program template with minimal structure
**Concepts:** Program skeleton, main function structure
**Key Points:** Starting point for C programs with return 0

### 01_basic_function_call.c
**Purpose:** Demonstrates basic function calling with hardcoded values
**Concepts:** Function definition, function call, return values
**Key Points:** Simple multiplication function with predefined inputs (20 * 20)

### 02_multiply_with_user_input.c
**Purpose:** Multiplication function with user input via scanf
**Concepts:** User input handling, function with parameters, return values
**Key Points:** Interactive program that accepts two numbers and displays their product

### 03_function_prototype.c
**Purpose:** Demonstrates function prototyping (declaration before use)
**Concepts:** Function prototype syntax, parameter types in declaration
**Key Points:** Shows how to declare function signature before main() and define later

### 04_forward_declaration.c
**Purpose:** Forward declaration example with proper function ordering
**Concepts:** Function definition after main(), forward declaration
**Key Points:** Demonstrates calling a function defined later in the code

### 05_implicit_function_declaration.c
**Purpose:** Demonstrates implicit function declaration behavior
**Concepts:** Implicit declaration (old C standard), type mismatch warnings
**Key Points:** Shows what happens when function is called without prior declaration - compiler assumes int return type

### 06_function_definition_after_call.c
**Purpose:** Function definition placed after the function call
**Concepts:** Function definition location, implicit declaration
**Key Points:** Demonstrates calling a function before its definition without prototype

### 07_compilation_with_prototype.c
**Purpose:** Compilation check with function prototype present
**Concepts:** Successful compilation with proper declarations
**Key Points:** Shows clean compilation when function is properly declared before use

### 08_compilation_without_prototype.c
**Purpose:** Compilation check without function prototype
**Concepts:** Compilation warnings, implicit function declaration
**Key Points:** Demonstrates compilation behavior when function is called without prototype (may show warnings)

### 09_activation_record_concept.c
**Purpose:** Demonstrates activation record (stack frame) concept
**Concepts:** Function call mechanism, parameter passing, activation records
**Key Points:** Shows how function calls create activation records with parameters and local variables

### 10_function_call_without_prototype.c
**Purpose:** Function call without prototype - validity check
**Concepts:** Function call validity, implicit declaration, return value handling
**Key Points:** Demonstrates calling a function without declaration and ignoring return value

### 11_function_call_ignoring_return.c
**Purpose:** Function call where return value is not used
**Concepts:** Return value handling, function side effects
**Key Points:** Shows that function executes even if return value is not captured

### 12_function_execution_order.c
**Purpose:** Demonstrates function execution order and call stack
**Concepts:** Function call sequence, nested function calls, execution flow
**Key Points:** Shows output sequence when multiple functions call each other (f, g, h functions)

### 13_arithmetic_swap.c
**Purpose:** Swapping two numbers using arithmetic operations (no function)
**Concepts:** Arithmetic swapping, variable manipulation
**Key Points:** Demonstrates swapping using addition/subtraction without temporary variable

### 14_swap_using_function.c
**Purpose:** Swapping two numbers using a function (call by value)
**Concepts:** Call by value, function parameters, scope of variables
**Key Points:** Demonstrates that swapping inside function doesn't affect original variables (call by value limitation)

## How to Compile and Run

### Using GCC (MinGW/Windows)
```bash
gcc filename.c -o filename.exe
filename.exe
```

### Using GCC (Linux/Mac)
```bash
gcc filename.c -o filename
./filename
```

### Example
```bash
gcc 02_multiply_with_user_input.c -o multiply
./multiply
```

## Prerequisites

- C compiler (GCC, Clang, or MSVC)
- Basic understanding of C syntax
- Text editor or IDE (VS Code recommended)

## Learning Path

1. Start with `00_empty_template.c` to understand basic structure
2. Progress through files in numerical order (00-14)
3. Each file builds upon concepts from previous examples
4. Compile and run each example to see output
5. Experiment by modifying code to understand behavior

## Key Concepts Summary

### Function Prototyping
- Declares function signature before use
- Helps compiler check parameter types and return types
- Prevents implicit declaration warnings

### Forward Declaration
- Allows function definition after main()
- Requires prototype before function call

### Implicit Declaration
- Old C standard feature (removed in C99+)
- Compiler assumes `int` return type if not declared
- Can lead to undefined behavior

### Activation Record
- Memory structure created for each function call
- Contains parameters, local variables, return address
- Managed on the call stack

### Call by Value
- C uses call by value for function parameters
- Changes to parameters inside function don't affect original variables
- Demonstrated in swap examples (13 and 14)

## Notes

- Some files may show compilation warnings with modern compilers (C99+ standard)
- `void main()` is used in some examples (non-standard; should be `int main()`)
- These examples are for educational purposes to demonstrate concepts
- Always use function prototypes in production code

## Reference Material

- Lecture Notes: "Functions & storage classes 01 Class Notes Parakram GATE 2024 Computer science Weekday (Hinglish).pdf"
- Topic: Functions and Storage Classes
- Course: C Mastery Series

## Author

Created as part of C programming mastery coursework focusing on functions and storage classes.

---

**Last Updated:** July 2026
**Lecture:** 01 - Functions & Storage Classes

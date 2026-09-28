# CS50x – Problem Set 1

Solutions and implementations for **Problem Set 1** of [CS50x: Introduction to Computer Science](https://cs50.harvard.edu/x/).

This problem set introduces fundamental concepts in **C programming**, including user input, variables, conditionals, loops, functions, nested loops, integer arithmetic, and basic algorithms.

## Problems

### 1. Hello, World

The first problem is a simple introduction to programming in C.

The task is to write a program that prints:

```text
hello, world
```

to the terminal.

This exercise provides an introduction to the basic structure of a C program and the process of compiling and executing C code.

**Concepts practiced:**

* `main()`
* `printf()`
* C program structure
* Compilation and execution

[Problem specification](https://cs50.harvard.edu/x/psets/1/world/)

---

### 2. Hello, It's Me

In this problem, the program asks the user for their name and then prints a personalized greeting.

For example:

```text
What's your name? Romina
hello, Romina
```

The exercise introduces interaction with the user and demonstrates how values entered through the terminal can be stored and used by a program.

**Concepts practiced:**

* User input
* Variables
* Strings
* Functions
* Formatted output

[Problem specification](https://cs50.harvard.edu/x/psets/1/me/)

---

## 3. Mario

The Mario problem introduces nested loops and output formatting by asking the programmer to recreate a pyramid of blocks inspired by *Super Mario Bros.*

There are two versions of the problem.

### Mario – Less Comfortable

The less comfortable version asks the user for the height of a half-pyramid and prints it using `#` characters.

For example, for a height of `4`:

```text
   #
  ##
 ###
####
```

The program must also validate the user's input so that the height falls within the required range.

**Concepts practiced:**

* User input
* Input validation
* `for` loops
* Nested loops
* Spaces and formatted output
* Conditionals

[Problem specification](https://cs50.harvard.edu/x/psets/1/mario/less/)

### Mario – More Comfortable

The more comfortable version builds a double-sided pyramid with a two-space gap between the two halves.

For a height of `4`:

```text
   #  #
  ##  ##
 ###  ###
####  ####
```

The problem requires careful control of both spaces and blocks and provides additional practice with nested loops.

**Concepts practiced:**

* Nested loops
* Multiple loop counters
* Output formatting
* Input validation
* Problem decomposition

[Problem specification](https://cs50.harvard.edu/x/psets/1/mario/more/)

---

## 4. Cash

The Cash problem introduces the concept of a **greedy algorithm**.

The program receives an amount of change and determines the minimum number of coins needed to make that amount.

The algorithm repeatedly selects the largest available coin that does not exceed the remaining amount.

For example, if the change is `$0.41`, the program should use:

```text
25 + 10 + 5 + 1
```

resulting in:

```text
4
```

coins.

**Concepts practiced:**

* Greedy algorithms
* Integer arithmetic
* Loops
* Conditionals
* Functions
* Problem decomposition

[Problem specification](https://cs50.harvard.edu/x/psets/1/cash/)

---

## 5. Credit

The Credit problem focuses on validating credit card numbers using **Luhn's algorithm**.

The program takes a credit card number as input and determines whether the number is valid. If it is valid, the program also identifies the card type based on its number and length.

The supported card types are:

* American Express
* MasterCard
* Visa

The problem requires processing the individual digits of a number and applying a specific mathematical algorithm to determine its validity.

**Concepts practiced:**

* Luhn's algorithm
* Integer arithmetic
* Modulo (`%`)
* Integer division
* Digit extraction
* Loops
* Conditionals
* Input validation

[Problem specification](https://cs50.harvard.edu/x/psets/1/credit/)

---

## Concepts Practiced

Problem Set 1 provides practice with several fundamental programming concepts:

* C syntax and program structure
* Variables and data types
* User input
* Formatted output
* Functions
* Conditional statements
* `for` loops
* `while` loops
* Nested loops
* Integer arithmetic
* Modulo operations
* Digit manipulation
* Input validation
* Greedy algorithms
* Luhn's algorithm
* Problem decomposition

## Language

**C**

## Course

**CS50x – Introduction to Computer Science**
Harvard University

### Resources

* [CS50x](https://cs50.harvard.edu/x/)
* [Problem Set 1](https://cs50.harvard.edu/x/psets/1/)

# Name: Palak Soni
# PRN: 24070123069
# ENTC A3



# Decision Making in C++

In programming, decision making allows a program to choose different paths based on conditions. It's similar to how we take decisions in daily life — for example, “If it's raining, take an umbrella. Otherwise, don't.”

C++ provides several decision control structures that help implement logic in programs. These include `if`, `if-else`, `else-if`, nested conditions, and `switch-case`. These constructs make programs smarter by allowing them to respond differently to different inputs or situations.

---

## Types of Decision Making in C++

### 1. `if` Statement
Executes a block of code only if a given condition is true.

### 2. `if-else` Statement
Runs one block if the condition is true, and another if it's false.

### 3. `else-if` Ladder
Used when multiple conditions need to be checked one after another.

### 4. Nested `if`
An `if` condition inside another `if`. Used when one condition depends on another.

### 5. `switch-case`
Best for fixed options (like menu choices or operator-based programs). Compares a variable with several constant cases and executes the matching one.

---

## Program on decision making



### 1. Even or Odd Checker
Checks if a number is divisible by 2. Uses the modulus operator and `if-else` condition to determine and display whether the number is even or odd.

### 2. Vowel or Consonant Identifier
Accepts a character input and checks whether it's a vowel using either `if-else` or a `switch` case. If not a vowel, it’s treated as a consonant.

### 3. Largest of Three Numbers
Takes three numbers and uses `else-if` ladder or nested `if` to compare and determine the largest among them.

### 4. Simple Calculator
Implements a calculator using a `switch` statement. Based on the operator entered (`+`, `-`, `*`, `/`), it performs the respective arithmetic operation.

### 5. Switch case with break statements (food Menu Program)
Menu-driven application using `switch-case`. Displays a food item based on the user's numeric choice. A default message is shown for invalid selections.

---

## Algorithms

### 1. Even or Odd Checker

1. Take input as a number `n`.
2. Check if `n % 2 == 0`.
3. If true, print “Even”.
4. Else, print “Odd”.

---

### 2. Vowel or Consonant

1. Take a character input.
2. Convert it to lowercase (if needed).
3. If it is `a`, `e`, `i`, `o`, or `u`, print “Vowel”.
4. Else, print “Consonant”.

---

### 3. Largest of Three Numbers

1. Take input: `a`, `b`, and `c`.
2. If `a > b` and `a > c`, print “a is largest”.
3. Else if `b > c`, print “b is largest”.
4. Else, print “c is largest”.

---

## Conclusion

Decision-making statements are the backbone of logical flow in C++ programs. Whether it's a basic check using `if`, evaluating multiple paths using `else-if`, or using `switch` for cleaner alternatives, these tools make your programs flexible and responsive. The examples shared cover common scenarios and form a strong foundation for real-world programming logic.



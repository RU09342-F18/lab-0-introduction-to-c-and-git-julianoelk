# Lab Exercise 0: Introduction to C, Git, and the MSP430

#### The goal of this assignment exercise is to generate a "math.c" and "math.h" file that can eventually be placed into an example UART Calculator code.

# Functionality 

#### Includes the capability to perform the following mathematical functions and bit-wise operations

- Addition          (+)
- Subtraction       (-)
- Multiplication    (*)
- Integer Divide    (/)
- Modulus           (%)
- Left Shift        (<<)
- Right Shift       (>>)
- Bitwise AND       (&)
- Bitwise OR        (|)
- Bitwise XOR       (^)
- Bitwise Inverse   (~)

# Useage

#### The math function is in the following format:

- int math(int num1, int num2, char Operator)

#### Therefore, depending on the intended function, the user will input the following:

######
Addition          (+)
- math(num1, num2, '+')
- num1 + num 2

######
Subtraction       (-)
- math(num1, num2, '-')
- num1 - num 2

######
Multiplication    (*)
- math(num1, num2, '*')
- num1 * num 2

######
Integer Divide    (/)
- math(num1, num2, '/')
- num1 / num 2

######
Modulus           (%)
- math(num1, num2, '%')
- num1 % num 2

######
Left Shift        (<<)
- math(num1, num2, '<')
- num1 << num 2

######
Right Shift       (>>)
- math(num1, num2, '>')
- num1 >> num 2

######
Bitwise AND       (&)
- math(num1, num2, '&')
- num1 & num 2

######
Bitwise OR        (|)
- math(num1, num2, '|')
- num1 | num 2

######
Bitwise XOR       (^)
- math(num1, num2, '^')
- num1 ^ num 2

######
Bitwise Inverse   (~)
- math(num1, num2, '~')
- ~num1
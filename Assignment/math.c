#include "math.h"
/*
 *  math.c
 *
 *  Due Date: Sept 10, 2018
 *  Author: Julia K.
 */
 
 
/**
 * This function implements the following mathematical functions and Bit-wise operations according to given operator:
 * -----------------------------------------------------
 * |  OPERATOR   |     MEANING     |  RESULT RETURNED  |
 * -----------------------------------------------------
 * |     '+'     | Addition        |   (num1 + num2)   |
 * |     '-'     | Subtract        |   (num1 - num2)   |
 * |     '*'     | Multiply        |   (num1 * num2)   |
 * |     '/'     | Divide          |   (num1 / num2)   |
 * |     '%'     | Modulus         |   (num1 % num2)   |
 * |     '<'     | Left Shift      |   (num1 << num2)  |
 * |     '>'     | Right Shift     |   (num1 >> num2)  |
 * |     '&'     | Bitwise AND     |   (num1 & num2)   |
 * |     '|'     | Bitwise OR      |   (num1 | num2)   |
 * |     '^'     | Bitwise XOR     |   (num1 ^ num2)   |
 * |     '~'     | Bitwise Inverse |   (~num1)         |
 * -----------------------------------------------------
 * 
 */
 
int math(int num1, int num2, char Operator)
{
    switch (Operator) {
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '/':
            return num1/num2;
            break;
        case '%':
            return num1%num2;
            break;
        case '<':
            return num1<<num2;
            break;
        case '>':
            return num1>>num2;
            break;
        case '&':
            return num1&num2;
            break;
        case '|':
            return num1|num2;
            break;
        case '^':
            return num1^num2;
            break;
        case '~':
            return ~num1;
            break;
        default:
            break;
    }
}

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+ or -): ");
    scanf(" %c", &operator); // Space before %c to consume newline character
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform operation
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    } 
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    } 
    else {
        printf("Invalid operator! Only + and - are allowed.\n");
    }

    return 0;
}


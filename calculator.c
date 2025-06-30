#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.21f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.21f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.21f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.21f\n", result);
            } else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
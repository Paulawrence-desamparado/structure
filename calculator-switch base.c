#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %g + %g = %g", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %g - %g = %g", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %g * %g = %g", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Cannot divide by zero");
            else
                printf("Result: %g / %g = %g", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}

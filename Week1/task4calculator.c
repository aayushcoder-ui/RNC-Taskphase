#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Sum:%f ", num1 + num2);
            break;
        case '-':
            printf("Difference:%f", num1 - num2);
            break;
        case '*':
            printf("Product:%f", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Quotient:%f", num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
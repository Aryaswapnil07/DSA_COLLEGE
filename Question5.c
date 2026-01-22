#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter an expression (e.g., 10 + 5): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }

    printf("Result = %.2lf\n", result);

    return 0;
}

#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("%.2f", result);
            break;

        case '-':
            result = a - b;
            printf("%.2f", result);
            break;

        case '*':
            result = a * b;
            printf("%.2f", result);
            break;

        case '/':
            if (b == 0)
                printf("Division by zero is not allowed");
            else {
                result = a / b;
                printf("%.2f", result);
            }
            break;

        case '%':
            if ((int)b == 0)
                printf("Division by zero is not allowed");
            else
                printf("%d", (int)a % (int)b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
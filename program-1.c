#include <stdio.h>

int main() {
    double a, b, res;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        res = a + b;
        printf("Result: %.2lf\n", res);}
    else if (op == '-') {
        res = a - b;
        printf("Result: %.2lf\n", res);}
    else if (op == '*') {
        res = a * b;
        printf("Result: %.2lf\n", res);
    }
    else if (op == '/') {
        if (b != 0) {
            res = a / b;
            printf("Result: %.2lf\n", res);
        } else {
            printf("Error: Cannot divide by zero.\n");
        }
    }
    else {
        printf("Invalid operation.\n");
    }

    return 0;
}

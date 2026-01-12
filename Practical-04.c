#include <stdio.h>

int main() {
    int n;
    int a, b, c;
    int max;
    char op;

    /* Odd / Even */
    printf("Enter a number to check Odd/Even: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Result: Even number\n");
    else
        printf("Result: Odd number\n");

    /* Maximum of three numbers (Ternary) */
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Maximum number = %d\n", max);

    /* Switch case calculator */
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
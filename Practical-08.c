#include <stdio.h>

// Function to return square
int square(int x) {
    return x * x;
}

// Pass by value
void passByValue(int x) {
    x = 50;
    printf("Inside passByValue: %d\n", x);
}

// Pass by reference
void passByReference(int *x) {
    *x = 50;
    printf("Inside passByReference: %d\n", *x);
}

// Prime check function
void primeCheck(int n) {
    int i, flag = 0;
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%d is Prime Number\n", n);
    else
        printf("%d is Not Prime Number\n", n);
}

// Factorial function
void factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++)
        fact = fact * i;
    printf("Factorial of %d = %d\n", n, fact);
}

// Swap using pass by reference
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i, j;
    int n = 5;

    // 1. Star Pattern
    printf("Star Pattern:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n");

    // 2. Number Pattern
    printf("Number Pattern:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n");

    // 3. Function to return square
    printf("Square of 4 = %d\n", square(4));

    printf("\n");

    // 4. Pass by value
    int a = 10;
    passByValue(a);
    printf("After passByValue: %d\n", a);

    printf("\n");

    // 5. Pass by reference
    passByReference(&a);
    printf("After passByReference: %d\n", a);

    printf("\n");

    // 6. return vs printf
    printf("Using return: %d\n", square(5));

    printf("\n");

    // 7. Prime check
    primeCheck(7);

    printf("\n");

    // 8. Factorial
    factorial(5);

    printf("\n");

    // 9. Swap using pass by reference
    int x = 5, y = 10;
    swap(&x, &y);
    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}

#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  // Number of rows

    // 1. Star Triangle
    printf("Star Triangle:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    // 2. Number Triangle
    printf("Number Triangle:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

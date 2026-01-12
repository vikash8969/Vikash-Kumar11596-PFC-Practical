#include <stdio.h>
#include <string.h>

int main() {

    int i, j;

    // 1. 1D Array Input / Output
    int a[5] = {10, 20, 30, 40, 50};
    printf("1D Array Elements:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n\n");

    // 2. Linear Search
    int key = 30, pos = -1;
    for(i = 0; i < 5; i++) {
        if(a[i] == key) {
            pos = i + 1;
            break;
        }
    }
    if(pos != -1)
        printf("Linear Search: %d found at position %d\n", key, pos);
    else
        printf("Linear Search: Element not found\n");

    printf("\n");

    // 3. Bubble Sort
    int temp;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 4; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Bubble Sort Result:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n\n");

    // 4. 2D Array Input / Output
    int b[2][2] = {{1, 2}, {3, 4}};
    int sum = 0;

    printf("2D Array Elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", b[i][j]);
            sum += b[i][j];
        }
        printf("\n");
    }

    printf("Sum of 2D Array Elements = %d\n\n", sum);

    // 5. String Functions
    char s1[20] = "Hello";
    char s2[20] = "World";

    printf("String Length of s1 = %d\n", strlen(s1));

    strcpy(s2, s1);
    printf("After strcpy, s2 = %s\n", s2);

    strcat(s1, s2);
    printf("After strcat, s1 = %s\n", s1);

    printf("strcmp result = %d\n", strcmp("abc", "abc"));

    return 0;
}
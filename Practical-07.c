
#include <stdio.h>

int main() {
    int i;

    printf("Loop from 1 to 10:\n");

    for(i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;  // Skip printing 3
        }

        if(i == 7) {
            break;     // Stop the loop completely when i = 7
        }

        printf("%d ", i);
    }

    printf("\nLoop ended.\n");
    return 0;
}

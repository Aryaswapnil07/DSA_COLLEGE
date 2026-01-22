#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        // Print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print letters
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}

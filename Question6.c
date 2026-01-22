#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int digits;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Special case for 0
    if (n == 0) {
        printf("{0}\n");
        return 0;
    }

    // Count digits
    digits = (int)log10(n) + 1;

    printf("{");

    for (int i = 1; i <= digits; i++) {
        int part = n / (int)pow(10, digits - i);
        printf("%d", part);

        if (i != digits)
            printf(", ");
    }

    printf("}\n");

    return 0;
}

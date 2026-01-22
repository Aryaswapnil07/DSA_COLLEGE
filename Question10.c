// Reverse a Number Using Modulo (%) Operator

// #include <stdio.h>

// int main() {
//     int num, rev = 0;

//     printf("Enter an N-digit integer: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         rev = rev * 10 + num % 10;
//         num = num / 10;
//     }

//     printf("Reversed Number: %d\n", rev);

//     return 0;
// }

//  Reverse a Number Without Using Modulo (%)


#include <stdio.h>
#include <string.h>

int main() {
    char numStr[100];

    printf("Enter an N-digit integer: ");
    scanf("%s", numStr);

    int len = strlen(numStr);

    printf("Reversed Number: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", numStr[i]);
    }

    printf("\n");
    return 0;
}

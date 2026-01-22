// Write a C program that reads an N-digit integer and checks whether it is an Armstrong number
// or not. For example,
//                             

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder;
    int n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check Armstrong
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

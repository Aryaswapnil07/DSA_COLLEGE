// Write a C program that inputs:
// • The first character of your name, and
// • Your date of birth in the format DDMMYYYY (as an integer)

#include <stdio.h>

int main() {
    char firstChar;
    char dob[9];  // 8 digits + null character

    printf("Enter the first character of your name: ");
    scanf(" %c", &firstChar);

    printf("Enter your date of birth (DDMMYYYY): ");
    scanf("%s", dob);

    printf("\nFirst character of name: %c", firstChar);
    printf("\nDate of birth: %s\n", dob);

    return 0;
}

// Write a C program that takes a single alphabet character as input.
// • If the character is a lowercase letter, convert it to uppercase.
// • Otherwise, print the character unchanged.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // for lower case letter checking 
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;   // Convert to uppercase
    }

    printf("Output: %c\n", ch);

    return 0;
}

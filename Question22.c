// Write a C program to read a sequence of characters from the keyboard, terminated by the
// newline character ’\n’, and reverse the string in-place without using any extra character array

#include <stdio.h>

int main() {
    char str[200];
    int len = 0;
    char temp;

    printf("Enter a sequence of characters (press Enter to stop):\n");

    // Read characters until newline
    while ((str[len] = getchar()) != '\n') {
        len++;
    }

    // Replace newline with null character
    str[len] = '\0';

    // Reverse the string in-place
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string:\n%s\n", str);

    return 0;
}

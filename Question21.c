#include <stdio.h>

int main() {
    char ch;
    int vowels = 0;
    int total = 0;

    printf("Enter a sequence of characters (press Enter to stop):\n");

    while ((ch = getchar()) != '\n') {
        total++;

        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || 
            ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    printf("Total characters entered: %d\n", total);
    printf("Number of vowels entered: %d\n", vowels);

    return 0;
}

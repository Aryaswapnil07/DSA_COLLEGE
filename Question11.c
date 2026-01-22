#include <stdio.h>
#include <string.h>

int main() {
    char numStr[100];
    int count = 0;

    printf("Enter an integer: ");
    scanf("%s", numStr);

 
    for (int i = 0; numStr[i] != '\0'; i++) {
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}

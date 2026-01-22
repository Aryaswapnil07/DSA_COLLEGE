// Write a C program to check whether a given array is a palindrome or not.


#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int isPalindrome = 1;   // Flag

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check palindrome
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");

    return 0;
}

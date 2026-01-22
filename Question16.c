// Write a C program to shift all zeros in an array to the end, without changing the relative order
// of the non-zero elements

#include <stdio.h>

int main() {
    int n, i, index = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements forward
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zero
    while (index < n) {
        arr[index] = 0;
        index++;
    }

    printf("Array after shifting zeros to end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


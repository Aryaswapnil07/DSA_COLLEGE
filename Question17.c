// Write a C program to compute the average of all elements in an array and count how many
// elements are greater than this average.


#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    int arr[100];
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    for (i = 0; i < n; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    printf("Average of elements = %.2f\n", average);
    printf("Number of elements greater than average = %d\n", count);

    return 0;
}

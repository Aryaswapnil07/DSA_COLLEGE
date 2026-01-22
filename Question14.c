// #include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

       
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second Largest: %d\n", secondLargest);
    printf("Second Smallest: %d\n", secondSmallest);

    return 0;
}

#include<stdio.h>

void selection(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n - 1; i++) { // One by one move boundary of unsorted subarray
        min = i; // Assume the first element is the minimum
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; // Update index of the minimum element
            }
        }
        // Swap the minimum element with the first element of the unsorted subarray
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int a[], int n) { // Function to print the array
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // Add newline after printing array
}

int main() {
    int a[] = {12, 32, 25, 8, 32, 17};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array elements are:\n");
    printArr(a, n);
    selection(a, n);
    printf("After sorting array elements are:\n");
    printArr(a, n);
    return 0;
}

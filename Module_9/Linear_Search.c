#include <stdio.h>

int linear_search(int a[], int n, int val) { // Corrected function name and parameter syntax
    for (int i = 0; i < n; i++) {
        if (a[i] == val) // Fixed the index from `a[1]` to `a[i]`
            return i + 1; // Return position (1-based index)
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52};
    int val = 41;
    int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements in the array

    int pos = linear_search(a, n, val); // Call the linear search function

    // Display array elements
    printf("The elements of the array are - ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Print result based on the return value of linear search
    if (pos != -1) {
        printf("Element %d is found at position %d\n", val, pos);
    } else {
        printf("Element %d is not present in the array\n", val);
    }

    return 0;
}

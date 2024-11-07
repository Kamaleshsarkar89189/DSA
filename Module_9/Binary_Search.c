#include <stdio.h>

int main() {
    int a[100], n, i, item, low, mid, high, flag = 0;

    // Input length of the array
    printf("Enter the length of the list: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter the elements of the list in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input the item to search
    printf("Enter the item to search: ");
    scanf("%d", &item);

    // Initialize binary search bounds
    low = 0;
    high = n - 1;

    // Perform binary search
    while (low <= high) {
        mid = (low + high) / 2;  // Calculate the middle index

        if (a[mid] == item) {  // Check if mid element is the item
            flag = 1;
            break;
        } else if (a[mid] < item) {  // If item is greater, ignore left half
            low = mid + 1;
        } else {  // If item is smaller, ignore right half
            high = mid - 1;
        }
    }

    // Output result
    if (flag) {
        printf("%d is found at position %d\n", item, mid + 1);  // mid + 1 for 1-based position
    } else {
        printf("Item is not found\n");
    }

    return 0;
}

#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) { // Reduced the loop range to optimize bubble sort
            if (arr[j] > arr[j + 1]) { // Changed '=' to '>' for proper comparison
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) // If no swaps were made, the array is already sorted
            break;
    }
}

int main() {
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubble_sort(arr, size);
    
    printf("Accending Order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}

#include <stdio.h>

void quick_sort(int a[], int ib, int ub);
int partition(int a[], int ib, int ub);

int main() {
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, 0, size - 1);
    
    printf("Ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void quick_sort(int a[], int ib, int ub) {
    if (ib < ub) {
        int pos = partition(a, ib, ub);
        quick_sort(a, ib, pos - 1);
        quick_sort(a, pos + 1, ub);
    }
}

int partition(int a[], int ib, int ub) {
    int pivot = a[ib];
    int start = ib + 1;
    int end = ub;
    
    while (start <= end) {
        while (start <= ub && a[start] <= pivot) {
            start++;
        }
        while (a[end] > pivot) {
            end--;
        }
        if (start < end) {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    a[ib] = a[end];
    a[end] = pivot;
    
    return end;
}

#include <stdio.h>

// Swaps the values at the given indices in the given array
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Insertion sort function that returns the number of shifts performed
int insertionSort(int arr[], int n) {
    int shifts = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
                shifts++;
            }
        }
    }
    return shifts;
}

int main() {
    int numQueries;
    scanf("%d", &numQueries);
    for (int i = 0; i < numQueries; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        int shifts = insertionSort(arr, n);
        printf("%d\n", shifts);
    }
    return 0;
}

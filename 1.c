#include <stdio.h>

// Inserts the given value into the sorted array arr of size n
void insertIntoSortedArray(int arr[], int n, int value) {
    int temp = value;
    int i;
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] > temp) {
            arr[i + 1] = arr[i];
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[j]);
            }
            printf("\n");
        } else {
            break;
        }
    }
    arr[i + 1] = temp;
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertIntoSortedArray(arr, n, arr[n - 1]);
    return 0;
}

#include <stdio.h>

void insertion_sort(int arr[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
      printf("\n");

    // print the array after each iteration
    for (int k = 0; k < n; k++) {
      printf("%d  ", arr[k]);
    }
    
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    printf("%d  ", arr[i]);
  }

  insertion_sort(arr, n);

  return 0;
}
//You are correct that the number of passes required to sort an array using insertion sort is equal to the number of elements in the array minus 1 in the worst case. 
//This is because the first element is already considered to be sorted after the first pass, so the algorithm only needs to make passes through the remaining elements 
//in the array.

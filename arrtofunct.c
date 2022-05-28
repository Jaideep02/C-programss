#include<stdio.h>

void printArrayElements(int* arr, int n) {
    // here array elements are passed by value
    int i;
    for(i = 0; i < n; i++) {
        printf("Element at index %d = %d \n", i, arr[i]);
    }
}

void main() {
    int arr[3] = {2,4,5};
    printArrayElements(arr, 3);
}
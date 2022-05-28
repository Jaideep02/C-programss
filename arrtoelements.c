#include<stdio.h>

void printElement(int element, int index) {
    // here array elements are passed by value
    printf("Element at index %d = %d \n", index, element);
}

void main() {
    int arr[5] = {2,4,5}, i;
    for(i = 0; i < 3; i++) {
        printElement(arr[i], i);
    }
}
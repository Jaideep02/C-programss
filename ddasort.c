#include<stdio.h>

void BubbleSort(int array[], int n) {
    int i,j;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if (array[j+1] < array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void BubbleSort2DArray(int array[][3], int n) {
    int i = 0;
    for(i = 0; i<n; i++) {
        // passing address of 1st element of ith row
        BubbleSort(array[i], 3);
    }
}

void printArray(int array[3][3]) {
    int i,j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d", array[i][j]);
        }        
        printf("\n");
    }
}

void main() {
    int arr[3][3] = {{1,4,5}, {4,2,1}, {9,8,3}};
    BubbleSort2DArray(arr, 6);
    printArray(arr);
}
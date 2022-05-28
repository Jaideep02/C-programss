#include <stdio.h>

int main() {
	int array1[5] = {10, 20, 30, 40, 50};
	int array2[5];
	printf("Copying One-Dimensional Arrays in C:\n");
	printf("Array1 elements: ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", array1[i]);
		array2[i] = array1[i]; // Copying array1 elements to array2
	}

	printf("\nArray2 elements after copying: ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", array2[i]);
	}
}
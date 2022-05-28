#include<stdio.h>

void increment(int* a) {
    *a += 1;
}

int main() {
    int a = 5;
    printf("a before increment = %d\n", a);
    increment(&a); // call by reference
    printf("a after increment = %d\n", a);
    return 0;
}
#include<stdio.h>

double getRatio(int numerator, int denominator) {
    // denominator is casted to double
    // to prevent integer division
    // result is casted to return type of function
    return (numerator / (double) denominator) ;
}

int main() {
    int a = 3, b = 2;

    double ratio = getRatio(a, b);
    printf("%d / %d = %.1lf", a, b, ratio);
    
    return 0;
}
#include<stdio.h>

// function declaration
int getRectangleArea(int, int);

void main() {
    int l,b;
    printf("Enter length and breadth\n");
    scanf("%d %d", &l, &b);
    // function call
    int area = getRectangleArea(l, b);
    printf("Area of rectangle = %d", area);
}

// function definition 
int getRectangleArea(int length, int breadth) {
    return length * breadth;
}
#include<stdio.h>

int factorial_01(int n)
{
    if(n==0)
        return 1;
    else
        return (factorial_01(n-1)*n);
}

int main()
{
    int a,fact;
    
    printf("Enter a number to calculate factorial: ");
    scanf("%d",&a);
    
    fact=factorial_01(a);
    
    printf("Factorial of %d = %d",a,fact);
    return 0;
}

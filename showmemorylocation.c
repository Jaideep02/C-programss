#include <stdio.h>
int main(void){
    int i;
    int *ptr = &i;
    printf("'i' is stored at memory location %p\n",&i);
    printf("ptr points to memory location %p\n",ptr);
}
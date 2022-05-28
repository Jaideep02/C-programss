#include <stdio.h>
#include<stdlib.h>

int main()
{

  int *ptr;
  ptr = (int*)malloc(sizeof(int));

  *ptr = 5;
  printf("%d\n",*ptr); //print value
  printf("%p\n",ptr);  //print address
  return 0;
}        
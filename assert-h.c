#include <stdio.h>
#include<assert.h>

int main() {
  int a = 32;
  while(a%2 == 0)
  {
    a = a/2;
  }
  assert(a!=1);
  printf("%d",a);
  return 0;
}
#include <stdio.h>
#include<ctype.h>

int main() {
  char c = 'A';
  printf("%d\n",isalpha(c));
  c = 'a';
  printf("%d\n",isalpha(c));
  c = '4';
  printf("%d\n",isalpha(c));
  return 0;
}
#include <stdio.h>
 #include <setjmp.h>

 static jmp_buf buf;

 void jumpfunction() {
      printf("This is printed first\n");
      longjmp(buf,1);
 }

 int main()
 {
    if(!setjmp(buf))
    {
      jumpfunction();
    }else
    {
      printf("Scalar Academy\n");
    }
    return 0;
  }
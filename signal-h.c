#include <signal.h>
#include<stdlib.h>
#include <stdio.h>

void signal_handler(int);

int main () {
   int x;

   signal(SIGINT, signal_handler);

   printf("Raising a signal\n");
   x = raise(SIGINT);

   if( x != 0) {
      printf("Couldn't raise signal\n");
      exit(0);
   }

   printf("Exit\n");
   return(0);
}

void signal_handler(int signal) {
   printf("Signal caught\n");
}
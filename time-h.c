#include<stdio.h>
#include<time.h>

int main(){
    time_t time_passed;

    time(&time_passed);
    printf("%ld",time_passed);
    return 0;
}
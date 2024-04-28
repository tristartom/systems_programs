#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void handler(int sig){
    printf("BOOM!\n"); 
    exit(0);}

int main(void){
   signal(SIGALRM, handler);
   printf("BEEP 1\n"); 
   alarm(5); 
   printf("BEEP 2\n"); 
   while(1){}}


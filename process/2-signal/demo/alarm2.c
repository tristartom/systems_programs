#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int beeps = 0;
void handler(int sig){
  if(++beeps < 5){ 
      printf("BEEP\n");
      alarm(1);
  } else {printf("BOOM!\n"); exit(0);}}

int main(void){
   signal(SIGALRM, handler);
   alarm(1); 
   while(1){}}


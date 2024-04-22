#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>   
#include <stdio.h>   

/* Signal handler */ 
void handler(int sig){
  printf("Caught SIGINT\n");
//  exit(0);//exit the process
}
int main(void) {
  if(signal(SIGINT, handler)==SIG_ERR) /* register SIGINT handler */
    printf("fail to install handler\n");
  while(1){/* Signal handler returns control here */} 
}

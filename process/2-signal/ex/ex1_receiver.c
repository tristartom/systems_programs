#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>   
#include <stdio.h>   
#include <unistd.h> 

/* Signal handler */ 
void handler(int sig){
  printf("Caught SIGUSR1\n");
  exit(0);
}
int main(void) {
  pid_t pid = getpid();
  printf("pid: %d\n", pid);
  if(signal(SIGUSR1, handler)==SIG_ERR) 
    printf("fail to install handler\n");
  while(1){} 
}

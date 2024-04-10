#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
  if(fork() == 0){
    printf("Child says: Hello world!\n");
    printf("Child says: Child PID is %d\n", getpid());
  } else {
    printf("Parent says: Hello world!\n");
    wait(NULL);
    printf("Parent says: Parent PID is %d\n", getpid());
  }
  return 0;
}

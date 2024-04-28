#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
int main(void){
  pid_t id = getpid(); 
  printf("Current PID is %d\n", id);
}

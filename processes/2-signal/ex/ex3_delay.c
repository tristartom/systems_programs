#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

pid_t pid;

void handler(int s){
  kill(pid, SIGINT);
  exit(0);}

int main(int argc, char** argv){
   pid = (pid_t) atoi(argv[1]);
   signal(SIGALRM, handler);
   alarm(5); 
   while(1){}}


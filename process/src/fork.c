#include <stdio.h>
#include <unistd.h>

int main(void){
  printf("Alice\n");
  fork();
  printf("Bob\n");
  if (fork() == 0)
    printf("Charlie\n");
}


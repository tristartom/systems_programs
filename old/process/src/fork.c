#include <stdio.h>
#include <unistd.h>

int main(void){
  fork();
  printf("Alice\n");
  fork();
  printf("Bob\n");
}


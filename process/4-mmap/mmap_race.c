#include <string.h>
#include <unistd.h>
#include <stdio.h>

void* shared_malloc(size_t size);

int main(void) {
//https://stackoverflow.com/a/76122977/486720
  int* bal = (int *)shared_malloc(sizeof(int));
  int* shared_x = (int *)shared_malloc(sizeof(int));

  * shared_x = 3;
  * bal = 13; 
  if (fork() == 0) {
    if(*bal>12){
      * shared_x = 4;
      printf("One book ordered\n");
      * bal -= 12;}
  } else {
    if(*bal>12){
      while(*shared_x == 3);
      printf("One book ordered\n");
      * bal -= 12;
    }
  }
}


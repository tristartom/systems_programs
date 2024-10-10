#include <string.h>
#include <unistd.h>
#include <stdio.h>

void* shared_malloc(size_t size);

int main(void) {
//https://stackoverflow.com/a/76122977/486720
  int* shared_x = (int *)shared_malloc(sizeof(int));
  * shared_x = 3;
  if (fork() == 0) {
    printf("Child read: %d\n", *shared_x);
    * shared_x = 4;
    printf("Child write: %d\n", *shared_x);
  } else {
    printf("Parent read: %d\n", *shared_x);
    while(*shared_x == 3);
    printf("After sync, parent read: %d\n", *shared_x);}}

#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

#include <string.h>
#include <unistd.h>

void* shared_malloc(size_t size) {
  // Our memory buffer will be readable and writable:
  int protection = PROT_READ | PROT_WRITE;

  // The buffer will be shared (meaning other processes can access it), but
  // anonymous (meaning third-party processes cannot obtain an address for it),
  // so only this process and its children will be able to use it:
  int visibility = MAP_SHARED | MAP_ANONYMOUS;

  // The remaining parameters to `mmap()` are not important for this use case,
  // but the manpage for `mmap` explains their purpose.
  return mmap(NULL, size, protection, visibility, -1, 0);
}

int main() {
  int* shared_x = (int *)shared_malloc(sizeof(int));
  * shared_x = 3;
  int pid = fork();
  if (pid == 0) {
    printf("Child read: %d\n", *shared_x);
    * shared_x = 4;
    printf("Child wrote: %d\n", *shared_x);
  } else {
    printf("Parent read: %d\n", *shared_x);
    while(* shared_x == 3);
    printf("After 1s, parent read: %d\n", *shared_x);
  }
}

/*
int main() {
  char parent_message[] = "hello";  
  char child_message[] = "goodbye"; 

  void* shared_var = shared_malloc(128);

  memcpy(shared_var, parent_message, sizeof(parent_message));

  int pid = fork();

  if (pid == 0) {
    printf("Child read: %s\n", shared_var);
    memcpy(shared_var, child_message, sizeof(child_message));
    printf("Child wrote: %s\n", shared_var);

  } else {
    printf("Parent read: %s\n", shared_var);
    sleep(1);
    printf("After 1s, parent read: %s\n", shared_var);
  }
}
*/

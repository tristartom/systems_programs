#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
void* shared_malloc(size_t size) {
  int prot = PROT_READ | PROT_WRITE;
  int flag = MAP_SHARED | MAP_ANONYMOUS;
  return mmap(NULL, size, prot, flag, -1, 0);
}

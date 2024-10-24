#include "csapp.h"

void* shared_malloc(size_t size);

int main(int argc, char **argv) {
  int* shared_index_childp = (int *)shared_malloc(sizeof(int));
  int* shared_bal = (int *)shared_malloc(sizeof(int));
  int* shared_lock = (int *)shared_malloc(sizeof(int));
  * shared_lock = 3;
  * shared_bal = 13;
  * shared_index_childp = 0;

  int port = atoi(argv[1]), listenfd, connfd;
  struct sockaddr_in clientaddr;
  socklen_t clientlen = sizeof(clientaddr);
  listenfd = open_listenfd(port);
  while (1) {
    connfd = accept(listenfd, (SA *)&clientaddr, &clientlen);
    printf("Socket connected: %d\n", connfd);
    //TODO: app code: multi-process echo server 
    (*shared_index_childp)++;
    if(fork() == 0) { char buf2[10];
      //while (read(connfd, buf2, 10) > 0)
      if(read(connfd, buf2, 10) > 0){
        printf("%s", buf2);}

  if (*shared_index_childp == 2) {
    if(*shared_bal>12){
      * shared_lock = 4;
      printf("One book ordered\n");
      * shared_bal -= 12;}
  } else {
    if(*shared_bal>12){
      while(*shared_lock == 3);
      printf("One book ordered\n");
      * shared_bal -= 12;
    }}
      write(connfd, "Response\n", 10); //reads separated by "\n"
      close(connfd);}
  } exit(0);}

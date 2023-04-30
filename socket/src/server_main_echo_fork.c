#include "csapp.h"
void handle_client_echo(int connfd){
  char buf2[10];
  while (read(connfd, buf2, 10) > 0){
    printf("%s", buf2);
  } close(connfd);
}

int main(int argc, char **argv) {
  int port = atoi(argv[1]), listenfd, connfd;
  struct sockaddr_in clientaddr;
  socklen_t clientlen = sizeof(clientaddr);
  listenfd = open_listenfd(port);
  while (1) {
    connfd = accept(listenfd, (SA *)&clientaddr, &clientlen);
    printf("Socket connected: %d\n", connfd);
    //TODO: app code: multi-process echo server 
    if(fork() == 0) 
      handle_client_echo(connfd);
  } exit(0);}



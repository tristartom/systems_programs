#include "csapp.h"
void handle_client_web(int connfd){
  char buf2[1000];
  while (read(connfd, buf2, 1000) > 0){
    printf("%s", buf2);
//https://stackoverflow.com/questions/33784127/minimal-http-server-reply
//  write(connfd, "HTTP/1.1 404\r\n\r\nContent-Length: 0\r\n", 200);
    write(connfd, "HTTP/1.1 200 OK\r\n"
      "Content-Length: 38\r\n"
      "Content-Type: text/html; charset=utf-8\r\n"
      "\r\n"
      "<button type=\"button\">CSE384</button>", 500);
  } close(connfd);}

int main(int argc, char **argv) {
  int port = atoi(argv[1]), listenfd, connfd;
  struct sockaddr_in clientaddr;
  socklen_t clientlen = sizeof(clientaddr);
  listenfd = open_listenfd(port);
  while (1) {
    connfd = accept(listenfd, (SA *)&clientaddr, &clientlen);
    printf("Socket connected: %d\n", connfd);
    //TODO: app code: multi-process echo server 
    if(fork() == 0){
      handle_client_web(connfd); exit(0);
  }}}

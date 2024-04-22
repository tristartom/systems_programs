#include "csapp.h"
int open_listenfd(int port){
  struct sockaddr_in serveraddr;
  int listenfd = socket(AF_INET,SOCK_STREAM,0);
  /* Fill in the server's IP address and port */
  bzero((char *) &serveraddr, sizeof(serveraddr));
  serveraddr.sin_port = htons((unsigned short)port);
  bind(listenfd, (SA *) &serveraddr, sizeof(serveraddr));
  listen(listenfd, LISTENQ); return listenfd;
}


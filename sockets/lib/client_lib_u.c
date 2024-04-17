#include "csapp.h"
int open_clientfd(char *hostname, int port){
  struct sockaddr_in serveraddr;
  int clientfd = socket(AF_INET, SOCK_STREAM, 0);
  serveraddr.sin_family = AF_INET;
  if (inet_pton(AF_INET, hostname, &serveraddr.sin_addr)<=0)
  {printf("\nInvalid address\n"); return -1;}
  serveraddr.sin_port = htons(port);
  connect(clientfd,(SA*)&serveraddr,sizeof(serveraddr));
  return clientfd;
}

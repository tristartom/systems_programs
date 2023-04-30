#include "csapp.h"
int open_clientfd(char *hostname, int port){
  struct sockaddr_in serveraddr;
  int clientfd = socket(AF_INET, SOCK_STREAM, 0);
  struct hostent *hp = gethostbyname(hostname);
  bzero((char *) &serveraddr, sizeof(serveraddr));
  bcopy((char *)hp->h_addr_list[0],
    (char *)&serveraddr.sin_addr.s_addr, hp->h_length);
  serveraddr.sin_port = htons(port);
  connect(clientfd,(SA*)&serveraddr,sizeof(serveraddr));
  return clientfd;
}


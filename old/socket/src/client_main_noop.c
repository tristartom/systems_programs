//#include "csapp.h"
//http://csapp.cs.cmu.edu/2e/ics2/code/include/csapp.h
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <unistd.h>
#include <strings.h>
#include <netinet/in.h>
#include <netdb.h>

#define	MAXLINE	 8192  /* Max text line length */
typedef struct sockaddr SA;

int main(int argc, char **argv) {
  int clientfd, port=atoi(argv[2]);
  char *host=argv[1], buf[MAXLINE];
  clientfd = open_clientfd(host, port);
  //TODO: put app-specific code below
}

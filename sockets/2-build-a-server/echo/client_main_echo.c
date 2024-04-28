#include "csapp.h"
int main(int argc, char **argv) {
  int clientfd, port=atoi(argv[2]);
  char *host=argv[1], buf[MAXLINE];
  clientfd = open_clientfd(host, port);
  //TODO: app code: echo client
  write(clientfd, "Alice\n", 10); //reads separated by "\n"
  write(clientfd, "Bob\n", 10);
  write(clientfd, "Charlie\n", 10);
  close(clientfd);
}

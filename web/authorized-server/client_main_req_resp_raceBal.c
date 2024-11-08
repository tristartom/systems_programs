#include "csapp.h"
int main(int argc, char **argv) {
  int clientfd, port=atoi(argv[2]);
  char *host=argv[1], buf[MAXLINE]; char buf2[10];
  clientfd = open_clientfd(host, port);
  //TODO: app code: echo client
  write(clientfd, "Request\n", 10); //reads separated by "\n"
  if (read(clientfd, buf2, 10) > 0){
    printf("%s", buf2);}
  close(clientfd);
}

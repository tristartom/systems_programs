#include "csapp.h"
int main(int argc, char **argv) {
  int clientfd, port=atoi(argv[2]);
  char *host=argv[1], buf[MAXLINE];
  clientfd = open_clientfd(host, port);
  while(fgets(buf,4096,stdin)!=NULL){
    //each read is separated by "\n"
    write(clientfd, buf, 10);}
  close(clientfd);
}


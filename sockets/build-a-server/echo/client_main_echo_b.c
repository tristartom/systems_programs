#include "csapp.h"
int main(int argc, char **argv) {
  int clientfd, port=atoi(argv[2]);
  char *host=argv[1], buf[MAXLINE];
  clientfd = open_clientfd(host, port);
  //TODO: app code: blocking echo client
  while(fgets(buf,4096,stdin)!=NULL){
    write(clientfd, buf, 10);}
  close(clientfd);
}

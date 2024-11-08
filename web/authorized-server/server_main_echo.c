#include "csapp.h"
char access_w(char* filename){
  struct stat buf;
  if(stat(filename, &buf) < 0) {printf("error"); return 1;} 
  return (buf.st_mode & S_IWUSR) ? 'w' : '-';
}

int main(int argc, char **argv) {
  int port = atoi(argv[1]), listenfd, connfd;
  struct sockaddr_in clientaddr;
  socklen_t clientlen = sizeof(clientaddr);
  listenfd = open_listenfd(port); while (1) {
    connfd = accept(listenfd, (SA *)&clientaddr, &clientlen);
    printf("Socket connected: %d\n", connfd);
    //TODO: app code: echo server
    char buf2[10];
    while (read(connfd, buf2, 10) > 0){
      printf("%s", buf2); 
      //after echo
      if (access_w("file.txt")){
        int fd = open("file.txt", O_CREAT|O_TRUNC|O_RDWR);
        write(fd, buf2, 10);
        close(fd);    
      }
    }
    close(connfd);
    exit(0);}
}

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void){
  char buf2[1];
  int fd = open("file1.txt", O_RDONLY);
  if (fd < 0) {printf("open error"); return -1;}
  lseek(fd, 2, SEEK_SET);
  while(read(fd, buf2, 1) == 1)
    printf("%c", buf2[0]); 
  close(fd);
}

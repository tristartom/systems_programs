#include<stdio.h> 
#include<unistd.h> //lseek, STDIN_FILENO
#include <fcntl.h>
char buf[] = "new text\n"; 
int main(void){
  int fd = open("file_append.txt", O_CREAT|O_RDWR|O_APPEND);
//  lseek(fd, 0L, SEEK_END); /* position to EOF */
  write(fd, buf, 100); /* and write */
}

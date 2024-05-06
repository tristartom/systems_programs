#include<stdio.h> 
#include<unistd.h> //lseek, STDIN_FILENO
#include <fcntl.h>
char buf1[] = "abcdefghij"; char buf2[] = "ABCDEFGHIJ";
int main(void){
    int fd = open("file.hole", O_CREAT|O_TRUNC|O_RDWR);
    if(write(fd,buf1,10)!=10)printf("buf1 write error");
    //offset=10
    //comment out the following line, get file.nohole 
    lseek(fd,16384,SEEK_SET);
    //offset=16384
    write(fd, buf2, 10);
    //offset=16394
}

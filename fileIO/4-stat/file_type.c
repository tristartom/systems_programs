#include<stdio.h>
#include <sys/stat.h>
int main(int argc, char** argv) {
  struct stat buf; char *ptr;
  printf("%s: ", argv[1]);
  if(stat(argv[1], &buf) < 0) {printf("error"); return 1;}
  if (S_ISREG(buf.st_mode)) ptr = "regular";
  else if (S_ISDIR(buf.st_mode)) ptr = "directory";
  else if (S_ISSOCK(buf.st_mode)) ptr = "socket";
  printf("%s\n", ptr);}

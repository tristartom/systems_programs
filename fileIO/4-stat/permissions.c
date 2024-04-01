#include<stdio.h> 
#include <sys/stat.h>
int main(void) {
  struct stat buf; char modeval[10];
  if(stat("file.txt", &buf) < 0) {printf("error"); return 1;} 
  modeval[0] = (buf.st_mode & S_IRUSR) ? 'r' : '-';
  modeval[1] = (buf.st_mode & S_IWUSR) ? 'w' : '-';
  modeval[2] = (buf.st_mode & S_IXUSR) ? 'x' : '-';
  modeval[3] = (buf.st_mode & S_IRGRP) ? 'r' : '-';
  modeval[4] = (buf.st_mode & S_IWGRP) ? 'w' : '-';
  modeval[5] = (buf.st_mode & S_IXGRP) ? 'x' : '-';
  modeval[6] = (buf.st_mode & S_IROTH) ? 'r' : '-';
  modeval[7] = (buf.st_mode & S_IWOTH) ? 'w' : '-';
  modeval[8] = (buf.st_mode & S_IXOTH) ? 'x' : '-';
  modeval[9] = '\0'; printf("%s\n",modeval);}

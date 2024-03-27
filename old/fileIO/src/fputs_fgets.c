#include<stdio.h>
#include<stdlib.h>

int main(void){
  FILE * f = fopen("file.txt", "r+");
  FILE * f2 = fopen("file2.txt", "w+");
  char buf[100];
  while(fgets(buf,100, f) != NULL)
    fputs(buf, f2);
  fclose(f); fclose(f2); return 0;
}

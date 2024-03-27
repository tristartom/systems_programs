#include<stdio.h>
#include<stdlib.h>

int main(void){
  FILE * f = fopen("file.txt", "r+");
  FILE * f2 = fopen("file2.txt", "w+");
  char buf[100];
  int round = 0;
  while(fgets(buf,100, f) != NULL){
  round ++;
    fputs(buf, f2);}
  printf("#round:%d\n", round);
  fclose(f); fclose(f2); return 0;
}

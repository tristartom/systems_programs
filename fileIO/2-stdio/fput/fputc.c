#include<stdio.h>
#include<stdlib.h>
int main(void){
  FILE * f = fopen("file.txt", "r+");
  FILE * f2 = fopen("file2.txt", "w+");
  int c;
  int round = 0;
  while((c = fgetc(f)) != EOF){
  round ++;
    if(fputc(c, f2) == EOF) printf("error\n");
  }
  printf("#round:%d\n", round);
  fclose(f);fclose(f2); return 0;
}

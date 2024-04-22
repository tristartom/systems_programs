#include<stdio.h>
#include<stdlib.h>
int main(void){
  FILE * f = fopen("file.txt", "r+");
  FILE * f2 = fopen("file2.txt", "w+");
  int c;
  while((c = fgetc(f)) != EOF){
    if(fputc(c, f2) == EOF) printf("error\n");
  } 
  fclose(f);fclose(f2); return 0; 
}


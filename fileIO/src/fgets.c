#include<stdio.h>
#include<stdlib.h>

int main(void){
  FILE * f = fopen("file.txt", "r+");
  char buf[100];
  while(fgets(buf,100, f) != NULL)
    fputs(buf, stdout);
  fclose(f); 
}


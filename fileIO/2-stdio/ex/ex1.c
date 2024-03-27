#include<stdio.h>
#include<stdlib.h>

int main(void){
  FILE * f = fopen("file.txt", "r+");
  char buf[100];
  int round = 0;
  while(fgets(buf, 100, f) != NULL){
    round++;
    if (round >3) break;
    printf("%s", buf);
  }
  fclose(f); return 0;
}

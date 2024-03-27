#include<stdio.h>
#include<stdlib.h>
int main(void){
  char buf[4096];
  while(fgets(buf,4096,stdin)!=NULL)
    fputs(buf,stdout);
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(void){
  char buf[] = "Hello world!\n";
  fputs(buf,stdout);
//  printf("%s", buf);
  return 0;
}

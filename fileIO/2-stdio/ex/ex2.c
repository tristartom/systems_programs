#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
  FILE * f = fopen(argv[1], "a");
  fclose(f);
}

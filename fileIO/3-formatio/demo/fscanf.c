#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE * f = fopen("file.txt", "r+");
    char string[100];
    while(fscanf(f, "%s", string) != EOF){
        fprintf(stdout, "%s\n", string);
    }
    fclose(f);
    return 0;
}

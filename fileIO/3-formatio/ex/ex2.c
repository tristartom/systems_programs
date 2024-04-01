#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE * f = fopen("file.txt", "r+");
    int i1, i2, i3;
    fscanf(f, "%d\n%d\n%d", &i1, &i2, &i3);
    fprintf(stdout, "%d\n", i1+i2+i3);
    fclose(f);
    return 0;
}


#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc, char **argv) {
  struct hostent *hp = gethostbyname(argv[1]);
  if(hp!=NULL){ printf("%s=\n",hp->h_name);
    unsigned int i=0;
    while(hp->h_addr_list[i]!=NULL){
      printf("\t%s\n",inet_ntoa(
            *(struct in_addr*)(hp->h_addr_list[i])));
      i++;
    } printf("\n");}}

#include <stdio.h>
#include <arpa/inet.h>

int main(int argc, char **argv) {
  struct in_addr ip;
  //ip.s_addr = 127;
  //ip.s_addr = 257;
  //ip.s_addr = 1025;
  inet_aton("127.0.0.1", &ip);
  printf("\t%s\n",inet_ntoa(ip));
}

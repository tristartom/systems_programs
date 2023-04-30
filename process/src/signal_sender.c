#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>     /* atoi */
int main(int argc, char** argv){
    pid_t pid = (pid_t) atoi(argv[1]);
    int sig = atoi(argv[2]);
    kill(pid, sig);
}

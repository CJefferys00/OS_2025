#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int x = 100;
    printf("hello (pid:%d) here is a value: %d\n", (int) getpid(), x);
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        x = 101;
        printf("hello, I am child (pid:%d), here is the value: %d\n", (int) getpid(), x);
    } else {
        // parent goes down this path (original process)
        x = 111;
        printf("hello, I am parent of %d (pid:%d), here is the value: %d\n",
	       rc, (int) getpid(), x);
    }
    return 0;
}

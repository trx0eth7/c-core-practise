#include <iostream>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    pid_t pid = getpid();
    pid_t ppid = getppid();

    printf("Process id: %d, process parent id: %d\n", pid, ppid);

    return EXIT_SUCCESS;
}

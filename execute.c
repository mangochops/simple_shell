#include "simple.h"
#include <unistd.h>

void execute_command(const char *info)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        execlp(info, info, (char *)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else
    {
        wait(NULL);
    }
}
#include "simple.h"

int main(void)
{
    char command[100];

    if (true)
    {
        mangoes_prompt();
        reads_command(command, sizeof(command));
        execute_command(command);
    }
    else
    {
        return 0;
    }
}

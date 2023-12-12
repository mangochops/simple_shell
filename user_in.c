#include "simple.h"

void reads_command(char *command, size_t size)
{
    if (fgets(command, size, stdin) == NULL)
    {
        if (feof(stdin))
        {
            bw_print("\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            bw_print("Error while reading input. \n");
            exit(EXIT_FAILURE);
        }
    }
    command[strcspn(command, "\n")] = '\0';
}

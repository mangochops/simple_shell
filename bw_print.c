#include "simple.h"

void bw_print(const char *info)
{
    write(STDOUT_FILENO, info, strlen(info));
}
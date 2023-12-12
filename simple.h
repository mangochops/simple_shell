#ifndef SIMPLE_H
#define SIMPLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>

void mangoes_prompt(void);
void bw_print(const char *info);
void reads_command(char *command, size_t size);
void execute_command(const char *command);

#endif

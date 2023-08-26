#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
void pchar(char a, int *nums);
void pstring(const char *str, int *nums);
void pint(int num, int *nums);


#endif

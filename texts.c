#include "main.h"

/**
 * pstring - to print texts to the screen
 * @str: character to be used
 * @nums: points to int
 */
void pstring(const char *str, int *nums)
{
	while (*str)
	{
		write(1, str++, 1);
		(*nums)++;
	}
}

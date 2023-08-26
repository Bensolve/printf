#include "main.h"

/**
 * pstring - to print texts to the screen
 * @str: character to be used
 * @nums: points to int
 */
void pstring(const char *str, int *nums)
{
	if (str == NULL)
	{
		pstring("(null)", nums);
	}
	else
	{
		while (*str)
		{
			write(1, str++, 1);
			(*nums)++;
		}
	}
}

#include "main.h"

/**
 * pchar - display a single char
 * @a: character to be used
 * @nums: points to int
 */
void pchar(char a, int *nums)
{
	write(1, &a, 1);
	(*nums)++;
}

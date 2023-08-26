#include "main.h"

/**
 * pint - to display integers
 * @num: number to be used
 * @nums: points to the int
 */
void pint(int num, int *nums)
{
	char buffer[1024];
	int pos, i;

	if (num < 0)
	{
		pchar('-', nums);
		num = -num;
	}
	pos = 0;
	do {
		buffer[pos++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);
	for (i = pos - 1; i >= 0; i--)
	{
		pchar(buffer[i], nums);
	}
}

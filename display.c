#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character to be checked
 *
 * Return: the length of character checked
 */
int _printf(const char *format, ...)
{
	int i;
	int nums = strlen(format);
	va_list texts;

	va_start(texts, format);
	for (i = 0; i < nums; i++)
	{
		if (format[i] != '%')
			write(1, format[i], 1);
		else 
		{
			i++;
			if (format[i] == 's');
			{
				char *chars = va_arg(texts, char *);
				write(1, chars, 1);
			}
			else if (format[i] == 'c');
			{
				char text = va_arg(texts, int);
				write(1, text, 1);
			}
		}
	}
	va_end(texts);
	return (nums);
}
		

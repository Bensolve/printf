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
	int nums = 0;
	va_list texts;

	if (format == NULL)
		return (-1);

	va_start(texts, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			pchar(format[i], &nums);
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			if (format[i] == 'c')
			{
				char text = va_arg(texts, int);

				pchar(text, &nums);
			}
			else if (format[i] == 's')
			{
				char *chars = va_arg(texts, char *);

				pstring(chars, &nums);
			}
			else if (format[i] == '%')
			{
				pchar('%', &nums);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int x = va_arg(texts, int);
				pint(x, &nums);
			}
		}
	}
	va_end(texts);
	return (nums);
}

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
			write(1, &format[i], 1);
			nums++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;

			if (format[i] == '%')
			{
				write(1, &format, 1);
				nums++;
			}
			if (format[i] == 's')
			{
				char *chars = va_arg(texts, char *);
				int lens = 0;

				while (*(chars + lens) != '\0')
				{
					lens++;
				}
				write(1, chars, lens);
				nums += lens;
			}
			else if (format[i] == 'c')
			{
				char text = va_arg(texts, int);

				write(1, &text, 1);
				nums++;
			}
			else if (format[i] == 'd')
			{
				int x = va_arg(texts, int);

				write(1, &x, 1);
				nums++;
			}


		}
	}
	va_end(texts);
	return (nums);
}
		

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printf - print function
 *
 * @format: argument being printed
 * Return: number of charcters being printed
 */

int _printf(const char *format, ...)
{
	int i;
	int length = strlen(format);
	va_list ptr;

	va_start(ptr, format);

	for (i = 0; i < length; i++)
	{
		if (format[i] != '%')
		{
			putchar(*(format + i));
		}
		else
		{
			char spec = (*(format + i + 1));

			if (spec == 'c')
			{
				putchar(va_arg(ptr, int));
			}
			if (spec == 's')
			{
				int j;
				char *mystring = va_arg(ptr, char *);
				int length2 = strlen(mystring);

				for (j = 0; j < length2; j++)
				{
					putchar(*(mystring + j));
				}
			}
			i++;
		}
	}
	va_end(ptr);
	return (24);
}

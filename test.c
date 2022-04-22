#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - print function
 *
 * @format: argument being printed
 * Return: number of charcters being printed
 */

/*int _printf(const char *format, ...)
{
	int i;
	int length = strlen(format);
	va_list ptr;
	char c, d, e;
	int count = 0;

	va_start(ptr, format);
	for (i = 0; i < length; i++)
	{
		if (format[i] != '%' && format[i] != 92)
		{
			count++;
			c = (int) *(format + i);
			write(1, &c, 1);
		}
		else
		{
			char spec = (*(format + i + 1));

			if (spec == 'c')
			{
				count++;
				d = va_arg(ptr, int);
				write(1, &d, 1);
			}
			if (spec == 's')
			{
				int j;
				char *mystring = va_arg(ptr, char *);
				int length2 = strlen(mystring);

				for (j = 0; j < length2; j++)
				{
					count++;
					e = (int) (*(mystring + j));
					write(1, &e, 1);
				}
			}
			i++;
		}
	}
	va_end(ptr);
	return (count);
}
*/

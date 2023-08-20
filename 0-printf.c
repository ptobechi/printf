#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints output according to formats
 * @format: format specifier
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, sc = 0;
	char *str;

	va_start(list, format);

	for (; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			count++;

			switch (format[count])
			{
				case 's':
					str = va_arg(list, char *);
					if (str)
					{
					for (; str[sc] != '\0'; sc++)
					{
					_putchar(str[sc]);
					count++;
					}
					}
					break;
				case 'c':
					_putchar(format[count]);
					count++;
					break;
				default:
					_putchar(format[count]);
					count++;
			}
		}
		else
			_putchar(format[count]);
			count++;
	}
	va_end(list);
	return (count);
}

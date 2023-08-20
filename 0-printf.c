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
	int count = 0, i = 0;
	char *str;

	va_start(list, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					str = va_arg(list, char *);
					while (*str)
					{
						_putchar(*str);
						str++;
						count++;
					}
					break;
				case 'c':
					_putchar((char)va_arg(list, int));
					count++;
					break;
				case '%':
					_putchar('%');
					count++;
					break;
			}
		}
		else
			_putchar(format[count]);
			count++;
	}
	va_end(list);
	return (count);
}

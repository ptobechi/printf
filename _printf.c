#include <stdio.h>
#include "main.h"

/**
 * _printf - prints output according to formats
 * @format: format specifier
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	int char_count = 0, i = 0, j = 0;
	_search _array[] = {
		{'s', handle_string},
		{'c', handle_char},
		{'%', handle_percent},
		{'d', handle_int},
		{'i', handle_int},
		{'b', convert_2_binary}
	};
	va_list args;

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (; j < 6; j++)
			{
				if (format[i] == _array[j].str)
				{
					char_count += _array[j].f(args);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
	}

	va_end(args);
	return (char_count);
}


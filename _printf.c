#include <stdio.h>
#include "main.h"

/**
 * _printf - prints output according to formats
 * @format: format specifier
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	int char_count = 0, i = 0;
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

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			/*perfom a search on the array structure*/
			for (; i < (int)sizeof(_array) / (int)sizeof(_array[0]); i++)
			{
				/*if format is found in the array invoke function*/
				if (*format == _array[i].str)
				{
					char_count += _array[i].f(args);
					break;
				}
			}
			if (i == (int)sizeof(_array) / sizeof(_array[0]))
			{
				/*handle unsuported format specifier errors*/
				_putchar('%');
				_putchar(*format);
				char_count += 2;
			}
		}
		else
		{
			_putchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}

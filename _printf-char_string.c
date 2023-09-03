#include "main.h"

/**
 * handle_string - print string values
 * @list: variable arguments
 * Return: Void
 */
int handle_string(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;

	if (str == NULL)
	{
		char *null_ptr = "(null)";
		while (*null_ptr)
		{
			_putchar(*null_ptr);
			null_ptr++;
			count++;
		}
	}else{


		while (*str)
		{
			_putchar(*str);
			str++;
			count++;
		}
	}
	return (count);
}

/**
 * handle_char - print a character
 * @list: variable argument
 * Return: Void
 */
int handle_char(va_list list)
{
	_putchar((char)va_arg(list, int));
	return (1);
}

/**
 * handle_percent - handles percent
 * Return: Void
 */
int handle_percent(void)
{
	_putchar('%');
	return (1);
}

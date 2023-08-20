#include "main.h"

/**
 * handle_string - print string values
 * @list: variable arguments
 * @count: strinng count
 * Return: Void
 */
void handle_string(va_list list, int *count)
{
	char *str = va_arg(list, char *);

	while (*str)
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}

/**
 * handle_char - print a character
 * @list: variable argument
 * @count: number count
 * Return: Void
 */
void handle_char(va_list list, int *count)
{
	_putchar((char)va_arg(list, int));
	(*count)++;
}

/**
 * handle_percent - handles percent
 * @count: arg count
 * Return: Void
 */
void handle_percent(int *count)
{
	_putchar('%');
	(*count)++;
}

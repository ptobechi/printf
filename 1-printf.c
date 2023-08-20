#include "main.h"

/**
 * handle_int - print integer
 * @list: variable argument
 * @count: argument count
 * Return: void
 */
void handle_int(va_list list, int *count)
{
	_putchar(va_arg(list, int));
	(*count)++;
}

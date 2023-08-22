#include "main.h"

/**
 * handle_int - prints whole number
 * @list: format specifier
 * Return: Always 0 (Success)
 */
int handle_int(va_list list)
{
	int n = va_arg(list, int);
	int num = n, reversed = 0;

	if (num < 0)
	{
		handle_buffer('-');
		num = -num;
	}

	while (num > 0)
	{
		int digit = num % 10;

		reversed = reversed * 10 + digit;
		num /= 10;
	}

	if (reversed == 0)
	{
		handle_buffer('0');
	}
	else
	{
		while (reversed > 0)
		{
			int digit = reversed % 10;

			handle_buffer((char)(digit + '0'));
			reversed /= 10;
		}
	}

	return (1);
}


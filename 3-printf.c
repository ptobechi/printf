#include "main.h"

/**
 * handle_unsigned_int - converts int to an unsinged int
 * @list argument variable
 * Return: Always 0 (Success)
 */
int handle_unsigned_int(va_list list)
{
	unsigned int number = (unsigned int)va_arg(list, int);

	if (number < 0)
		return (0);

	_putchar(number + '0');
	return (1);
}

/**
 * handle_unsigned_octal - converts integer to octal
 * @list: argument variable
 * Return: Always 0 (Success)
 */
int handle_unsigned_octal(va_list list)
{
	unsigned int number = (unsigned int)va_arg(list, int);
	unsigned int octal_digits[20], i = 0, index = 0;

	if (number < 0)
		return (0);

	while (number > 0)
	{
		octal_digits[index] = number % 8;
		number /= 8;
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(octal_digits[i] + '0');
	}
	return (1);
}

/**
 * handle_hexadecimal - converts interger to hexadecimal
 * @list: argument variable
 * Return: Always 0 (Success)
 */
int handle_hexadecimal(va_list list)
{
	int number = va_arg(list, int);
	char hex_digits[] = "0123456789ABCDEF";
	char hex_rep[20];
	int index = 0;

	while (number > 0)
	{
		hex_rep[index] = hex_digits[number % 16];
		number /= 16;
		index++;
	}

	for (int i = index - 1; i >= 0; i--)
		_putchar(hex_rep[i] + '0');

	return (1);
}


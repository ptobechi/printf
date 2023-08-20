#include "main.h"

/**
 * handle_int - print integer
 * @list: variable argument
 * @count: argument count
 * Return: void
 */
void handle_int(va_list list, int *count)
{
	int digit = va_arg(list, int);
	int digitCount = 0;
	int i, j;

	if (digit == 0)
		digitCount = 1;
	else
	{
		while (digit != 0)
		{
			digit /= 10;
			digitCount++;
		}
	}

	if (digit < 0)
	{
		_putchar('-');
		(*count)++;
		digit = -digit;
	}

	for (i = 0; i < digitCount; i++)
	{
		int divisor = 1;
		for (j = 1; j < digitCount- i; j++)
			divisor *= 10;
		int digit = (num / divisor) % 10;
		_putchar('0' + digit);
		(*count)++;
	}
}

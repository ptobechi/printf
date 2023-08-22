#include "main.h"

/**
 * toBinary - convert num to binary
 * @number: int to convert
 * Return: Always 0 (Success)
 */
void toBinary(int number)
{
	if (number > 1)
	{
		toBinary(number / 2);
	}
	handle_buffer((char)(number % 2 + '0'));
}

/**
 * convert_2_binary - converts integerto binary
 * @list: arg
 * Return: Always 0 (Success)
 */
int convert_2_binary(va_list list)
{
	int number = va_arg(list, int);

	if (number < 0)
		return (0);

	toBinary(number);
	return (1);
}


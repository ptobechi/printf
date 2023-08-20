#include <unistd.h>

/**
 * _putchar - prints a character to the scree
 * @c: char variablee
 * Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

print_unsigned - Prints an unsigned number
* @types: List a of arguments
* @_newbuffer: _newBuffer array to handle print
* @flags:  Calculates active flags
* @width: get width
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed.
*/
int print_unsigned(va_list types, char _new_newbuffer[],
int flags, int width, int precision, int size)
{
int i = _new_newBUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);

num = convert_size_unsgnd(num, size);

if (num == 0)
_new_newbuffer[i--] = '0';

_new_newbuffer[_new_newBUFF_SIZE - 1] = '\0';

while (num > 0)
{
_new_newbuffer[i--] = (num % 10) + '0';
num /= 10;
}

i++;

return (write_unsgnd(0, i, _new_newbuffer, flags, width, precision, size))
}
/**
* print_octal - Prints an unsigned number in octal notation
* @types: Lista of arguments
* @_new_newbuffer: _newBuffer array to handle print
* @flags:  Calculates active flags
* @width: get width
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed
*/
int print_octal(va_list types, char _new_newbuffer[],
int flags, int width, int precision, int size)
{

int i = _new_newBUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);

num = convert_size_unsgnd(num, size);

if (num == 0)
_new_newbuffer[i--] = '0';

-new_newbuffer[_newBUFF_SIZE - 1] = '\0';

while (num > 0)
{
_new_newbuffer[i--] = (num % 8) + '0';
num /= 8;
}

if (flags & F_HASH && init_num != 0)
_newbuffer[i--] = '0';

i++;

return (write_unsgnd(0, i, _new_newbuffer, flags, width, precision, size));
}




/**
* print_hexadecimal - Prints an unsigned number in hexadecimal notation
* @types: Lista of arguments
* @_new_newbuffer: _newBuffer array to handle print
* @flags:  Calculates active flags
* @width: get width
* @precision: Precision specification
* @size: Size specifier
* Return: Number of chars printed
*/
int print_hexadecimal(va_list types, char _new_newbuffer[],
int flags, int width, int precision, int size)
{
return (print_hexa(types, "0123456789abcdef", _new_newbuffer,
flags, 'x', width, precision, size));

}




/**
* print_hexa - Prints a hexadecimal number in lower or upper
* @types: Lista of arguments
* @map_to: Array of values to map the number to
* @_newbuffer: Buffer array to handle print
* @flags:  Calculates active flags
* @flag_ch: Calculates active flags
* @width: get width
* @precision: Precision specification
* @size: Size specifier
* @size: Size specification
* Return: Number of chars printed
*/
int print_hexa(va_list types, char map_to[], char _newbuffer[],
int flags, char flag_ch, int width, int precision, int size)
{
int i = _newBUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);

num = convert_size_unsgnd(num, size);

if (num == 0)
_newbuffer[i--] = '0';

_newbuffer[_newBUFF_SIZE - 1] = '\0';

while (num > 0)
{
_newbuffer[i--] = map_to[num % 16];
num /= 16;
}

if (flags & F_HASH && init_num != 0)
{
_newbuffer[i--] = flag_ch;
_newbuffer[i--] = '0';
}

i++;

return (write_unsgnd(0, i,_newbuffer, flags, width, precision, size));
}




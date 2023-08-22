#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * struct _search - function and specifier structure
 * @str: string value
 * @f: function pointer
 * description: search structure for printf
 */
typedef struct _search
{
	const char str;
	int (*f)();
} _search;
void flush_buffer();
void handle_buffer(char c);
int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(va_list list);
int handle_char(va_list list);
int handle_percent(void);
int handle_int(va_list list);
int convert_2_binary(va_list list);
int handle_unsigned_octal(va_list list);
int handle_unsigned_int(va_list list);
int handle_hexadecimal(va_list list);
#endif /*_MAIN_*/

#ifndef _MAIN_
#define _MAIN_

#include <stdarg.h>

/**
 * struct _search - function and specifier structure
 * @str: string value
 * @f: function pointer
 * description: search structure for printf
 */
typedef struct _search
{
	const char *str;
	int (*f)();
} _search;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(va_list list);
int handle_char(va_list list);
int handle_percent(void);
int handle_int(va_list list);
int handle_decimal(va_list list);
#endif /*_MAIN_*/

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
	void (*f)();
} _search;
int _putchar(char c);
int _printf(const char *format, ...);
void handle_string(va_list list, int *count);
void handle_char(va_list list, int *count);
void handle_percent(int *count);
void handle_int(va_list list, int *count);
#endif /*_MAIN_*/

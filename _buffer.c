#include "main.h"

char buffer[BUFFER_SIZE];
int buff_index = 0;

/**
 * handle_buffer - add char array of buffer size
 * @c: charcter
 * Return: Always void
 */
void handle_buffer(char c)
{
	if (buff_index < BUFFER_SIZE - 1)
	{
		buffer[buff_index];
		buff_index++;
	}
	else
	{
		write(STDOUT_FILENO, buffer, buff_index);
		buff_index = 0;
	}
}

/**
 * flush_buffer - write out buffer content if not full
 * Return: void
 */
void flush_buffer() {
	if (buff_index > 0)
	{
		write(STDOUT_FILENO, buffer, buff_index);
		buff_index = 0;
	}
}

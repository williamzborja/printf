#include "holberton.h"

/**
* _putchar - print to std with buffer 2048
* @c: character to send to stdout
* @buffer: buffer to acummulate output
* @size: actual items in the buffer
* Return: integer number
*/
int _putchar(char c, char *buffer, int *size)
{
	if (*size == BUFFER_SIZE)
	{
		write(1, buffer, BUFFER_SIZE);
		free(buffer);
		*size = 0;
		buffer = malloc(BUFFER_SIZE);
	}
	buffer[*size] = c;
	*size += 1;
	return (0);
}

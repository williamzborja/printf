#include "holberton.h"

/**
* _putchar - print to std with buffer 2048
* @c: character to send to stdout
* Return: integer number
*/
int _putchar(char c, char *buffer, int *size)
{
	if (*size == BUFFER_SIZE)
	{
		*size = 0;
		write(1, buffer, BUFFER_SIZE);
		buffer[0] = '\0';
		return (0);
	}
	buffer[*size] = c;
	*size += 1;
	return (0);
}

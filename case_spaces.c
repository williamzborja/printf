#include "holberton.h"
/**
* case_spaces -  manage case with % and ' ' (spaces)
*
* @i: int
* @f: char*
* @count: int*
* @lista: lista
* @buffer: buffer to acummulate output
* @buffer_size: actual items in the buffer
* Return: va_list
*/
int case_spaces(
	int *i, const char *f, int *count, va_list lista,
	char *buffer, int *buffer_size)
{
	while (f[*i + 1] == ' ') /* Logica espacios */ /* quita espacios */
		*i += 1;

	if (f[*i + 1] == PERCENT)
	{
		_putchar(f[*i + 1], buffer, buffer_size);
		*count += 1;
		*i += 1;
		return (0);
	}
	if (format_is_correct_spaces(f[*i + 1]))
		get_function(f[*i + 1], i, count, lista, buffer, buffer_size);

	return (0);
}

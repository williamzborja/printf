#include "holberton.h"
/**
* _printf - printf functions :)
* @format: format with  %d  %i  %c %s
* Return: length for format with expansion  of specifiers of format
*/
int _printf(const char *format, ...)
{
	va_list lista;
	int i, count = 0, size = 0;
	char *buffer;

	buffer = malloc(BUFFER_SIZE);

	if (!buffer)
		return (-1);

	va_start(lista, format);

	if (format == NULL || (format[0] == PERCENT && format[1] == '\0'))
	{
		free(buffer);
		return (-1);
	}

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == PERCENT && format[i + 1] == PERCENT)
		{
			_putchar(format[i], buffer, &size);
			i++;
			count++;
			continue;
		}
		if (format[i] == PERCENT && format[i + 1] == ' ') /*caso spacios*/
			case_spaces(&i, format, &count, lista, buffer, &size);

		else if (format_is_correct(format[i], format[i + 1]))
			get_function(format[i + 1], &i, &count, lista, buffer, &size);
		else
		{
			_putchar(format[i], buffer, &size);
			count++;
		}
	}
	write(1, buffer, size);
	free(buffer);
	return (count);
}

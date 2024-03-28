#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * _printf - Print formatted output to stdout 
 * @format: The format string containing the format specifiers
 * Return: The number of characters printed on success, or -1 on failure.
 */
int _printf(const char *format, ...)
{
	va_list argumentList; /*List of Arguments*/
	int length = 0, i; /*Number of characters*/

	va_start(argumentList, format); /*Initialize argumentiList*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(argumentList, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			int stringLength = 0;

			stringLength = _puts(va_arg(argumentList, char *));
			i++;
			length += stringLength - 1;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			length = print_number(length, va_arg(argumentList, int)) - 1;
			i++;

		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[0] == '%'  && format[1] == '\0')
			return (-1);
		else if (format[i] == '%'  && format[i + 1] != '%')
			_putchar(format[i]);
		length += 1;
	}
	va_end(argumentList);
	return (length);
}

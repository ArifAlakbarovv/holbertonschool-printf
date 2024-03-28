#include "main.h"
#include <stddef.h>

/**
 * _puts - Writes a null-terminated string to the standard output (stdout)
 * @str: The string to be written
 * Return: void
 */
int _puts(char *str)
{
	int length;

	if (str == NULL)
	{
		str = "(null)";
	}

	if (str)
	{
		for (length = 0; str[length] != '\0'; length++)
		{
			_putchar(str[length]);
		}
	}

	return (length);
}

#include "main.h"
#include <stddef.h>

/**
 * _putsnumber - Writes a string representing a number to the so
 * @str: The string representing the number to be written
 * Return: void
 */
int _putsnumber(char *str)
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
			/*_putchar(str[length]);*/
		}
	}

	return (length);
}

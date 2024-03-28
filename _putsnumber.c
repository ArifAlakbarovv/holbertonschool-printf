#include "main.h"
#include <stddef.h>

/**
 * _putsnumber - print string
 * @str: string
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

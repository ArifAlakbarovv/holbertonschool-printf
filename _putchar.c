#include "main.h"
#include <unistd.h>

/**
 * _putchar - print 1 character
 * @c: character
 * Return: void
 */
int _putchar(char c)
{
	/**
	* In write function 1st parameter used to
	* print or input. 1-print 0-input.
	* 2nd paramter is used for printing character.
	* In here our character is c. 3rd parameter
	* used for how many character we printi. In there we print 1
	* character. Because putchar print only 1 character
	*/
	return (write(1, &c, 1));
}

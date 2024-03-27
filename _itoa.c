#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 *_itoa - change integer to string
 *@a: given integer
 *Return: size of returned integer
 */
int _itoa(int value)
{
	char *str;
	int size = 0, i = 0, j, n, temp;

   	 if (value < 0) 
   	 {
		 putchar('-');
		 n = -value;
		 size++;
    	} 
    	else if (value == 0) 
  		size++;
    	else 
        	n = value;

    	temp = n;
    	do {
        	n /= 10;
        	size++;
    	} while (n);
    	str = malloc(size);
	
    	/* Reset n to its original value for conversion to string */
    	n = temp;
    	i = 0;
    	do {
        	str[i++] = (n % 10) + '0';
        	n /= 10;
    	} while (n);

    	for (j = size - 1; j >= 0; j--) {
        	putchar(str[j]);
    	}

    	free(str);
    	return (size);
}

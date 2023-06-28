#include "main.h"
/**
 *_strcat(char *dest, char *src) - concatenate two strings
 *@dest: string one 
 *@src: string two
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
	int counter;
	_putchar(*dest);

	while(*dest++)
	{
		counter++;
		_putchar(*dest);
	}

	_putchar(*dest);
	_putchar('\n');
	*dest = *src;
	return dest;
}

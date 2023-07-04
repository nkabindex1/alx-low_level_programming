#include "main.h"
/**
 * _memset - sets a block of memory with n char letters
 * @s: array s
 * @b: char letter that will assigned to space
 * @n: number of char letters
 * Return: array of char  b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

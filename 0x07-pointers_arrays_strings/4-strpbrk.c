#include "main.h"
/**
 * _strpbrk - locates first occurance of a word
 * @s: array being searched
 * @accept: character being evaluated
 * Return: number of bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int r;


	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

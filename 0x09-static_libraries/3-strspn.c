#include "main.h"
/**
 * _strspn - copies address from src to dest
 * @s: array being searched
 * @accept: character being evaluated
 * Return: number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, r;

	n = 0;
	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

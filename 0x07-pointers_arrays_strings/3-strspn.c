#include "main.h"
/**
 * _strspn - copies address from src to dest
 * @s: array being searched
 * @accept: character being evaluated
 * Return: number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, v, c;

	v = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				v++;
				c = 1;
			}
		}
	}
	return (v * 4);
}

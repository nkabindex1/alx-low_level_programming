#include "main.h"
/**
 * _memcpy - copies address from src to dest
 * @src: array to be copied
 * @dest: placeholder for array being copied
 * @n: number of char letters to be copies
 * Return: copied address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

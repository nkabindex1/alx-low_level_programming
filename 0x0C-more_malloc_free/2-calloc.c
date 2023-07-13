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
/**
 *_calloc - creates space in memory
 *@nmemb: input
 *@size: amount to input
 *Return: pointer to concatenated string
 */
char *_calloc(unsigned int nmemb,  unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr = _memset(ptr, 0, nmemb * size);
	return (ptr);
}

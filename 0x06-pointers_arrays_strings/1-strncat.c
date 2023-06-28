#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest: string one
 *@src: string two
 *@n: bytes
 *Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

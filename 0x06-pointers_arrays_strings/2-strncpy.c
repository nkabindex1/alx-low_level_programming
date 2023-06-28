#include "main.h"
/**
 *_strncpy - concatenate two strings
 *@dest: string one
 *@src: string two
 *@n: bytes
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*int i;*/
	int j;

	/**i = 0;

	while (dest[i] != '\0')
		i++;
	*/
	j = 0;
	for (; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[j] = src[j];
		/*i++;*/
	}

	dest[j] = '\0';
	return (dest);
}

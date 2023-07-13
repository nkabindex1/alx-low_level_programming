#include "main.h"
/**
 *string_nconcat - creates space in memory
 *@s1: str1
 *@s2: str2
 *@n: amount to input
 *Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, r;
	unsigned int a;

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	ptr = malloc(i + n + 1);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	for (r = 0; r <= i; r++)
		ptr[r] = s1[r];
	for (a = 0; a <= n && s2[a] != '\0'; a++)
	{
		r++;
		ptr[r + a] = s2[a];
	}	
	return (ptr);
}

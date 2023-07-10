#include "main.h"
/**
 *str_concat - create 2-dim initialized 0
 *@s1: input
 *@s2: input
 *Return: 2-dim array
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, r, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = r = a = b = 0;

	for (; s1[i] != '\0'; i++)
		continue;
	for (; s2[r] != '\0'; r++)
		continue;

	concat = malloc(sizeof(char) * (i + r + 1));

	if (concat == NULL)
		return (NULL);

	for (; s1[a]; a++)
	{
		concat[a] = s1[a];
	}

	for (; s2[b]; b++)
	{
		concat[a] = s2[b];
		a++;
	}

	return (concat);
}

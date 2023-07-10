#include "main.h"
/**
 *_strdup - allocate new memory for string
 *@str: array
 *Return: address of the array
 */

char *_strdup(char *str)
{
	char *tmp;
	unsigned int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;

	for (; str[i] != '\0'; i++)
		continue;
	tmp = malloc(sizeof(char) * (i + 1));

	if (tmp == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
	{
		tmp[r] = str[r];
	}
	return (tmp);
}

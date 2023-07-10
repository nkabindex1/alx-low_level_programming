#include "main.h"
/**
 *alloc_grid - create 2-dim initialized 0
 *@height: input
 *@width: input
 *Return: 2-dim array
 */

int **alloc_grid(int width, int height)
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

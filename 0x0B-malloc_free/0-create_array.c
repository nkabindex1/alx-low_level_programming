#include "main.h"
/**
 *create_array - allocate memory for array and assign character c
 *@size: size of array
 *@c: character for instintiating array
 *return: address of the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

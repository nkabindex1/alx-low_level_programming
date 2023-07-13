#include "main.h"
/**
 *malloc_checked - creates space in memory
 *@b: size of allocated memory
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}

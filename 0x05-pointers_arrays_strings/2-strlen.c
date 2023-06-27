#include "main.h"
/**
 * _strlen - return the lenth of string
 * @s: string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s++) != '\0')
		len++;
	return (len);
}

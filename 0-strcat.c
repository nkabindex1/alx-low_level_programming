#include "main.h"
/**
 *_strcat(char *dest, char *src) - concatenate two strings
 *@dest: string one 
 *@src: string two
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
	int counter;

	while(*dest++)
	{
		counter++;
	}
	dest[counter] = *src;
}

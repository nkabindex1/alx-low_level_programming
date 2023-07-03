#include "main.h"
/**
 * _strchr - copies address from src to dest
 * @s: array being searched
 * @c: character being evaluated 
 * Return: address of the character with the first occurance of the evaluated char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *ptr;
	
	while (s[i] != '\0')
	{
		if ( s[i] == c)
			ptr = &s[i];
	}
	return (ptr);
}

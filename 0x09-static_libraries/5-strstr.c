#include "main.h"
/**
 * _strstr - locates first occurance of a word
 * @haystack: array being searched
 * @needle: array being evaluated
 * Return: number of bytes from accept
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (0);
}

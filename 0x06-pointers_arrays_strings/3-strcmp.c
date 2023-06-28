#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 *Return: 0 if equal, -1 if lesser, 1 if greater
 */
int _strcmp(char *s1, char *s2)
{
	int diff;
	int j;

	j = 0;
	diff = 0;
	for (; s1[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			diff = s1[j] - s2[j];
			break;
		}
	}
	return (diff);
}

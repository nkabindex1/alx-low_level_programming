#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: prints string
 * Return: int length of *s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);

}

#include "main.h"

/**
 * _isalpha - checks for alphabeth
 * @c: evaluated character
 * Return: 1 if alpha, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}

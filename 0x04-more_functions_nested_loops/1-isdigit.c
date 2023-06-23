#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: evaluated character
 * Return: 1 if is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

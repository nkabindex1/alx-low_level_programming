#include "main.h"
/**
 * _isupper -evaluates whether a input n is uppecase alphabeth or not
 * @c: evaluated character
 * Return: 1 if uppercasae, 0 is lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

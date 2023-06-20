#include "main.h"

/**
 * print_sign - checks for positives an negetives
 * @n: evaluated character
 * Return: 1 ifpositive, 0 if zero, -1 if negetive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar(45);
	return (0);
}

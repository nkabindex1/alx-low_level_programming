#include "main.h"

/**
 * print_last_digit - print last digit of n
 * @n: evaluated character
 * Return: n (last digit)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}

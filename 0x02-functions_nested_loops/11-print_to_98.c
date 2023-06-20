#include "main.h"

/**
 * print_to_98 - prints values from given n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		int number = i;
		int digits = 1;
		int tmp;
		int d;

		if (number < 0)
		{
			number = -number;
			_putchar(45);
		}
		tmp = number;

		while (tmp > 9)
		{
			tmp /= 10;
			digits++;
		}

		for (d = digits; d > 0; d--)
		{	int p = d - 1;
			int pow = 1;

			while (pow > 0)
			{
				pow *= 10;
				p--;
			}
			_putchar(number / pow + 48);
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}

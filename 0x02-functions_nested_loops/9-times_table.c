#include "main.h"

/**
 * times_table - prints every minute of the day of Jack Bauer
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int tmp = i * j;

			if (tmp <= 9)
				_putchar(tmp + 48);
			else
			{
				_putchar(tmp / 10 + 48);
				_putchar(tmp % 10 + 48);
			}
			_putchar(',');
			if (tmp <= 9)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

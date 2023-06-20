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

			_putchar(tmp + '0');
			_putchar(',');
			if (j < 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}

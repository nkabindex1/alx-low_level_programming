#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int h;

	for (h = 0; h <= 23; h++)
	{
		int m;

		for (m = 0; m <= 59; m++)
		{
			if (h <= 9)
				_putchar(48);
			_putchar(48 + h);
			_putchar(':');
			if (m <= 9)
				_putchar(48);
			_putchar(48 + m);

		}
	}
}

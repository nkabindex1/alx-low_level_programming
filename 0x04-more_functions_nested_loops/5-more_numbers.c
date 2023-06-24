#include "main.h"
/**
 * more_numbers - prints 10 rows of numbers from 0 to 14
 * Return: (Success)
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j == 0 && j <= 0)
			{
				_putchar(48 + j);
				continue;
			}
			_putchar('1');
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}

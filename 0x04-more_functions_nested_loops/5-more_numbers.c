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
			_putchar(i);
		_putchar('\n');
	}
}

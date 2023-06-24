#include "main.h"
/**
 * print_diagonal - prints line with as long as the specified width
 * @n: wdth of line
 * Return: (Success)
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			if (i == j && j != 0)
				_putchar(47);
			else
				_putchar(32);
		}
		_putchar('\n');
}

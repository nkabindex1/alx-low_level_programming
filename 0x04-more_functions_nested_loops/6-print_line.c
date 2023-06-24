#include "main.h"
/**
 * print_line - prints line with as long as the specified width
 * @n: wdth of line
 * Return: (Success)
 */
void print_line(int n)
{
	char ch = '_'
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

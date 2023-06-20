#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0 (Success)
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i < 121; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}

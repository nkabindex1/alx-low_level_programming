#include "main.h"

/**
 * print_alphabet_x10 - print all alphabets in lower x10
 */
void print_alphabet_x10(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		 _putchar('\n');
	}
}

#include "main.h"
/**
 * puts2 - prints string and adds newline
 * @s: string to be printed
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i+=2)
		_putchar(str[i]);
	_putchar('\n');
}

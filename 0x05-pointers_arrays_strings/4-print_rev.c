#include "main.h"
/**
 * _print_rev - prints string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int counter;
       
	counter =0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}

	while(counter)
	{
		_putchar(*s[counter-1]);
		counter--;
	}
	_putchar('\n');
}

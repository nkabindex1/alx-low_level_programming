#include "main.h"
/**
 *_print_rev_recursion - Entry point
 * @s: prints string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

}

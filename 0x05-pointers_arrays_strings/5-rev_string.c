#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int counter;
	char tmp;
	int i;

	counter = 0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	s--;
	i = 0;
	while (counter--)
	{
		tmp = *s + i;
		_putchar(tmp);
		i++;
		s--;
	}
	tmp = '\n' + i;
	*s = tmp;
}

#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int counter;
	char *tmp;
	int i;

	counter = 0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	s--;

	for (i = 0; i <= counter; i++)
	{
		*tmp = *s;
		tmp++;
		s--;
	}
	tmp++;
	*tmp = '\n';
	s = tmp;
}

#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int counter = 0;
	int i = 0;
	char tmp;

	while (s[i++] != '\0')
	{
		counter++;
	}

	for (i = counter - 1; i >= counter / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}

#include "main.h"
/**
 * rev_string - prints string in reverse
 * @s: string to be printed
 */
void rev_string(char *s);
{
	int counter;
	char tmp[counter];
        int i;

	counter = 0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	s--;
	
	for (i = 0; i < counter; i++)
	{
		tmp[i] = *s;
		s--;
	}
	
	tmp[counter + 1] = '\n';
	s = tmp;
}

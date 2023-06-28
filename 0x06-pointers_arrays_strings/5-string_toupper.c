#include "main.h"
/**
 *string_toupper - convert to upper
 *@s: string
 *return: char*
 */
char *string_toupper(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= 97)
			s[j] -= 32;
		j++;
	}
	return (s);
}

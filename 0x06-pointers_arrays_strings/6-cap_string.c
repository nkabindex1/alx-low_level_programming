#include "main.h"
/**
 *cap_string - convert to upper
 *@s: string
 *return: char*
 */
char *cap_string(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= 97 || s[j] <= 122)
			s[j] -= 32;
		j++;
	}
	return (s);
}

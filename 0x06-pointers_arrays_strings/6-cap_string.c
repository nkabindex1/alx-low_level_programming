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
		if (s[j] == '(' || s[j] == ')' || s[j] == '.' || s[j] == ',' || s[j] == ';' || s[j] == '!' || s[j] == '?' || s[j] == 34 || s[j] == '}' || s[j] == '{'){
			if(s[j+1] >= 97)
				s[j] -= 32;
		}
		j++;
	}
	return (s);
}

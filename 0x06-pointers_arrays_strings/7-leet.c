#include "main.h"
/**
 *leet - encode
 *@s: string
 *return: char*
 */
char *leet(char *s)
{
	int j;
	int i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	j = 0;
	for (; s[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[j] == s1[i])
			{
				s[j] = s2[i];
			}
		}
	}
	return (s);
}

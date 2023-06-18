#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - point of entry
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int length = sizeof(alphabets) / sizeof(alphabets[0]);
	int i;

	for (i = 0; i < length - 1; i++)
	{
		char lowerCh = tolower(alphabets[i]);

		if (lowerCh != 'q' || lowerCh != 'e')
			continue;

		putchar(lowerCh);
	}

	putchar('\n');

	return (0);
}

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
	int i = length - 2;

	for (; i >= 0; i--)
	{
		char lowerCh = tolower(alphabets[i]);

		putchar(lowerCh);
	}

	putchar('\n');

	return (0);
}

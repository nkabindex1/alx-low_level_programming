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
	int r;

	for (i = 0; i < length - 1; i++)
	{
		char lowerCh = tolower(alphabets[i]);

		putchar(lowerCh);
	}
	for (r = 0; r < length - 1; r++)
		putchar(alphabets[r]);

	putchar('\n');

	return (0);
}

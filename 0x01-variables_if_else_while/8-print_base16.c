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
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i <= 9)
			putchar(48 + i);
		else
			putchar(87 + i);
	}
	putchar('\n');

	return (0);
}

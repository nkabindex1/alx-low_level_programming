#include <main.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int length = sizeof(str) / sizeof(str[0]);
	int i;

	for (i = 0; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

#include "variadic_functions.h"
/**
 * print_string - prints numbers
 * @separator: string separator
 * @n: number of items
 * @...: variable items
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

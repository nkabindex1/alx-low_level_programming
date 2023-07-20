#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: string separator
 * @n: number of items
 * @...: variable items
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nums);
}

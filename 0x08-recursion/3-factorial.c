#include "main.h"
/**
 * factorial - Entry point
 * @n: number being evaluated
 * Return: int length of *s
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}

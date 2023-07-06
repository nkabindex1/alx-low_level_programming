#include "main.h"
/**
 * _sqrt_recursion - Entry point
 * @n: int input
 * Return: sqrt success
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry point
 * @n: int input
 * @i - input
 * Return: sqrt success
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i+1));
}



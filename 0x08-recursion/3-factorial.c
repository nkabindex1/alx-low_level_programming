#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: prints string
 * Return: int length of *s
 */
int factorial(int n)
{
	if (n == -1)
	{
		return (0);
	}else if (n == 0)
	{
		return (1);
	}
	return (n *factorial(n));

}

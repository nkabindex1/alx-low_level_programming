#include "main.h"
/**
 * _pow_recursion - Entry point
 * @n: int input
 * @y: int input
 * Return: pow success
 */
int _pow_recursion(int x, int y)
{
	int r;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}

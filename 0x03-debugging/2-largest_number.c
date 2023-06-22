#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = a;
	int num[3] = {a, b, c};
	int i;

	for (i = 1; i < 3; i++)
	{
		if (largest < num[i])
			largest = num[i];
	}
	return (largest);
}

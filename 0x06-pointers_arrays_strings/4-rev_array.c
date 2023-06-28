#include "main.h"
/**
 *reverse_array - compare two strings
 *@a: string one
 *@n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j;

	j = 0;
	for (; j < n--; j++)
	{
		int tmp = a[j];

		a[j] = a[n];
		a[n] = tmp;
	}
}

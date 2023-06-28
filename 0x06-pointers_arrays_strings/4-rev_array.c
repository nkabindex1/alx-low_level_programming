#include "main.h"
/**
 *reverse_array - compare two strings
 *@a: string one
 *@n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j;
	int length = (int)(n / 2) + (n % 2); 

	j = 0;
	for (; j <= length; j++)
	{
		int tmp = a[j];

		a[j] = a[n - j - 1];
		a[n - j - 1] = tmp;
	}
}

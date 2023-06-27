#include "main.h"
/**
 * swap_int - update pointer value to 98
 * @a: pointer value to be changed
 * @b: pointer to add
 */
void swap_int(int *a, int *b)
{
	int *tmp = *a;
	*a = *b;
	*b = *tmp;
}

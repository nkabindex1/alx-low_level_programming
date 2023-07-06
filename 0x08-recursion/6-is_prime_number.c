#include "main.h"
/**
 * is_prime_number - Entry point
 * @n: int input
 * Return: 1 if prime number, 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, n-1));
}
/**
 * is_prime - Entry point
 * @n: number
 * @divisor: number
 * Return: 1 if prime, 0 if not
 */
int is_prime(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	else if (n % divisor == 0)
       		return (0);
	return is_prime(n , divisor - 1);	
}

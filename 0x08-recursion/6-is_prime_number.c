#include "main.h"

/**
 * is_prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @d: divisor
 *
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int is_prime(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime(n, d + 1));

}

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int d = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, d));
}
#include "main.h"

/**
 * swap_int - swaps two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

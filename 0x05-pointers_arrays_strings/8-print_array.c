#include <stdio.h>

/**
 *print_array - prints an array of integers
 *@a: pointer number
 *@n: parameter number
 *
 *Return: no value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	putchar('\n');
}

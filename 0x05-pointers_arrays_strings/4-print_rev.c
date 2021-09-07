#include "main.h"

/**
 * print_rev - prints a word in reverse
 * @s: word to print in reverse
 *
 * Return: no value
 */
void print_rev(char *s)
{
	int counter, strLength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strLength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strLength - (counter++ + 1))));
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints a string, then a new line.
 * @str: input string.
 *
 * Return: no value
 */
void _puts(char *str)
{
while (*str)

_putchar(*str++);
_putchar('\n');
}

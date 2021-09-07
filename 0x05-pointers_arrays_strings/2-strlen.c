#include "main.h"

/**
 * _strlen - Displays a string's length.
 * @s: input string.
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}

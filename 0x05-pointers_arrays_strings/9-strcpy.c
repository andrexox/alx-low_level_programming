#include <stdio.h>
#include "main.h"

/**
 *_strcpy - copies word pointed to by src
 *@dest: pointer char void
 *@src: pointer char source
 *
 *Return: destination data
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j])
		j++;

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

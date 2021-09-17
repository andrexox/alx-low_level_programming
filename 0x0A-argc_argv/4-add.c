#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints addition of two positive numbers
 * @argc: argument counter
 * @argv: numbers to add
 * 
 * Return: 0 if successful, 1 if one of the
 * number contains symbols that are not digit
 */

int main(int argc, char *argv[])
{
int j;
int i = 1;
int sum = 0;

if (argc == 0)
{
printf("0\n");
return (0);
}


for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);

	return (0);
}

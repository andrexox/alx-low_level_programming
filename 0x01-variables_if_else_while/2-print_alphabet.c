#include <stdio.h>

/**
 * main - prints out all the letters of the alphabet
 *
 * Return: 0 (Successful)
 */

int main(void)
{
int i = 97;

while (i < 123)
{
putchar(i);
i++;
}
putchar(10);

return (0);
}

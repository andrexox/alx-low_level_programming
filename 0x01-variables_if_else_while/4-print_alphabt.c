#include <stdio.h>

/**
 * main - print the letters of the alphabet except q and e
 *
 * Return: 0 (Successful)
 */

int main(void)
{
int i = 97;

while (i < 123)
{
if (i != 101 && i != 113)
{
putchar(i);
}
i++;
}
putchar(10);

return (0);
}

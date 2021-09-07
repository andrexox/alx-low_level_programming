#include <stdio.h>

/**
 * main - print the numbers of base 16 in lowercase
 *
 * Return: 0 (Successful)
 */

int main(void)
{
int i = 0;

while (i < 48)
{
if (i < 10)
putchar(i + '0');
else if (i > 41)
putchar(i - 10 + 'A');
i++;
}
putchar(10);

return (0);
}

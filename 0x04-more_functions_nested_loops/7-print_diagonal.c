#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: integar number
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i, s;
for (i = 1; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (s = 1; s <= i; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

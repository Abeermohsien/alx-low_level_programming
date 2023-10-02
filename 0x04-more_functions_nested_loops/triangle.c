#include "main.h"


void print_triangle(int size)
{
int i, j, k;
for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
for (k = 0; k <= (size - i + j); k++)
{
_putchar(' ');
}
_putchar('#');
}
_putchar('\n');
}
}

#include "main.h"

/**
 * jack_bauer - counts the mintes in jack_bauer day
 * 
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b, c, d;
for (a = 0; a <= 2; a++)
{
for (b = 0; b <= 60; b++)
{
if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{	
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minutes / 10) + '0');
_putchar((minutes % 10) + '0');
_putchar('\n');
}
}
}
}
}
}

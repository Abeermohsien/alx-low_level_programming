#include "main.h"


/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int i;
i = 0;
while (i <= 9)
{
if (i == 2 || i == 4)
{
i = i + 1;
}
else
{
_putchar(48 + i);
i++;
}
}
_putchar('\n');
}

#include "main.h"

/**
 * more_numbers - prints numbers ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int n;
int i, cnt;
for (n = 0; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
{
cnt = i;
if (i > 9)
{
_putchar(1 + 48);
cnt = i % 10;
}
_putchar(cnt + 48);
}
_putchar('\n');
}
}

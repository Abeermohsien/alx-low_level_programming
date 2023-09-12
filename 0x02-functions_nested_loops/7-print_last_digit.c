#include "main.h"

/**
 *  print_last_digit - writes the last digit
 *  @n: digit twise
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int ldigit;
ldigit = n % 10;
if (ldigit < 0)
{
ldigit = ldigit * -1;
}
_putchar(ldigit + '0');
return (ldigit);
}

#include "main.h"
/**
 * factorial - pints the factorial of a number
 * @n: integer number
 * Return: integer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
n *= factorial(n - 1);
return (n);
}

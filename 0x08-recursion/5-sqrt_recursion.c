#include "main.h"
/**
 * square - giver square root
 * @n: integer number
 * @x: intege number
 * Return: integer
 */
int square(int n, int x)
{
if (x * x < n)
	return (square(n, x + 1));
else if (x * x == n)
	return (x);
else
	return (-1);
}
/**
 * _sqrt_recursion - return square numberr
 * @n: intege number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

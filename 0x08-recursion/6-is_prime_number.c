#include "main.h"
/**
 * primoo_number - return only prime numbers
 * @x: integer number
 * @n: intege numbe
 * Return: intege num
 */
int primoo_number(int n, int x)
{
if (x >= n && n > 1)
	return (1);
else if (n % x == 0 || n <= 1)
	return (0);
else
	return (primoo_number(n, x + 1));
}
/**
 * is_prime_number - return only prime numbers
 * @n: integer number
 * Return: intege num
 */
int is_prime_number(int n)
{
return (primoo_number(n, 2));
}

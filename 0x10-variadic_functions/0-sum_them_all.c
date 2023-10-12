#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: counter
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
va_start(ptr, n);
int i, sum = 0;
if (n == 0)
	return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);

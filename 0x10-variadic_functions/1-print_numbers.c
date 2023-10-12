#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with superator
 * @separator: char
 * @n: int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ptr;
va_start(ptr, n);
while (i < n)
{
printf("%d%s", va_arg(ptr, int), i < n ? (i < n - 1 ? separator : "") : "\n");
i++;
}
if (i == n)
{
printf("\n");
return;
}
va_end(ptr);
}

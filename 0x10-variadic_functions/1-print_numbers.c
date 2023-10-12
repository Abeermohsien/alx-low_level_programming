#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with superator
 * @separator: char
 * @n: int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = n;
va_list ptr;
va_start(ptr, n);
while (i--)
{
printf("%d%s", va_arg(ptr, int), i ? (separator ? separator : "") : "\n");
}
if (!n)
{
printf("\n");
return;
}
va_end(ptr);
}

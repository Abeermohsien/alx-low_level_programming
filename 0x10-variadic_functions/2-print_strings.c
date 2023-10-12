#include "variadic_functions.h"
/**
 * print_strings - functiorn that prints the string
 * @separator: char
 * @n: int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = n;
char *str;
va_list ptr;
if (n == NULL)
	printf("\n");
va_start(ptr, n);
while (i--)
{
printf("%d%s", (str = va_arg(ptr, char *)) ? str : "(nil)",
		i ? (separator ? separator : "") : "\n");
}
va_end(ptr);
}

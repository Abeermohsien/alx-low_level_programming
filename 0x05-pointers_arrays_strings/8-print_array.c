#include "main.h"
#include <stdio.h>

/**
 * print_array - print array members up to n
 * @a: array
 * @n: number that wanted to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
	printf("%d, ", a[i]);
else
	printf("%d", a[i]);
}
printf("\n");
}

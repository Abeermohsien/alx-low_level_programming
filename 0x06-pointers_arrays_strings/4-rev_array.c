#include "main.h"
/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[j];
a[j] = a[i];
a[i] = temp;
}
}

#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int start;
printf("enter anumber:");
scanf("%d", &start);
if (start < 98)
{
for (n = start; n <= 98; n++)
{
printf("%d, ", n);
}
}
if (start > 98)
{
n = start;
while(n >= 98)
{
printf("%d, ", n);
n--;
}
}
if (start == 98)
{
printf("%d, ", start);
}
return;
}

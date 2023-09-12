#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int n, start;
printf("enter anumber:");
scanf("%d", &start);
for (n = start; n <= 98; n++)
{
printf("%d, ", n);
}
return;
}

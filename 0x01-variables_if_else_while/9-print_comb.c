#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(48 + n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

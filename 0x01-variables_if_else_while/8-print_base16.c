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
char c;
for (n = 0; n <= 9; n++)
{
putchar(48 + n);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c)
}
putchar('\n');
return (0);
}

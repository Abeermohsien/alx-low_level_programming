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
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}

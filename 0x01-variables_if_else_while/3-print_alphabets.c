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
char alpha = 'a', ALPHA = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (ALPHA <= 'Z')
{
putchar(ALPHA);
ALPHA++;
}
putchar('\n');
return (0);
}

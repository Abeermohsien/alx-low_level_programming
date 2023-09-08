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
char alpha = 'a';
while (alpha <= 'z' && alpha != 'q')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}	

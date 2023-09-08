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
char alpha = 'a' ;

srand(time(0));
n = rand() - RAND_MAX / 2;
 /* your code goes there */
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}

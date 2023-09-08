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
while (alpha <= 'z')
{
if (alpha == 'q' || alpha == 'e')
{
alpha += 1;
} 
else 
{
putchar(alpha);
alpha++;
}
}
putchar('\n');
return (0);
}	

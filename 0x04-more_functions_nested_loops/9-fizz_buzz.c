#include <stdio.h>

/**
 * main - check for multiples of 3 nd 5 and both
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
/*char Fizz, Buzz, FizzBuzz;*/
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
putchar('\n');
return (0);
}

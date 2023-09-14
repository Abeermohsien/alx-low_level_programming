#include <stdio.h>

/**
 * main - check for multiples of 3 nd 5 and both
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
else if (i == 1)
{
printf("%d", i);
}
if ((i % 3 == 0) && (i % 5 != 0))
{
printf("Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("\n");
return (0);
}

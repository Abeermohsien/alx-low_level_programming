#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of cents
 * @argc: int
 * @argv: char
 * Return: 0.
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i;
int c = 0;
int m = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
if (m >= cents[i])
{
c += m / cents[i];
m = m % cents[i];
if (m % cents[i] == 0)
{
	break;
}
}
}
printf("%d\n", c);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

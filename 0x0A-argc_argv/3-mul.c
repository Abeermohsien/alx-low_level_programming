#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplcation of two integers
 * @argc: int
 * @argv: char
 * Return: 0.
 *
 */
int main(int argc, char *argv[])
{
int multi;
if (argc == 3)
{
multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
}
else
{
printf("ERROR\n");
return (1);
}

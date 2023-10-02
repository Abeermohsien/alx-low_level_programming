#include <stdio.h>
#include "main.h"

/*
 * main - prints natual numbes up to 98
 * eturn - 0 if sucess
 * **/
void print_to_98(int n)
{
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d, ", n);
}
}
else if (n == 98)
{
printf("%d, ", n);
}
else if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d, ", n);
}
}
else if (n < 0)
{
for (; n <= 98; n++)
{	
printf("%d, ", n);
}
}
printf("\n");
}

#include <stdio.h>
/*
 *main - prints alphabets in lowercase then uppercase
 * return - 0 if sucess
 * **/
int main()
{
int i, j;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (j = 65; j <= 90; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}

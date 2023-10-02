#include <stdio.h>
/*
 *main - prints alphabets except q and e
 * return - 0 if sucsess
 * **/
int main()
{
int i;
for (i = 97; i <= 122; i++)
{
if (i == 113 || i == 101)
{
continue;
}
else
{
putchar(i);
}
}
putchar('\n');
return (0);
}

#include "main.h"



/*
 * main - prints 10 tables
 * return - 0 if sucess
 * **/
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
_putchar(k + 48);
}
_putchar('\n');
}
}

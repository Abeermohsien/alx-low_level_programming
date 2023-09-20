#include "main.h"
/**
 * _strcmp - compare s1 ans as2
 * @s1: string charcter
 * @s2: string charcter
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int n = 0;
while (*s1)
{
if (*s1 != *s2)
{
        n = (*s1 - 48) -(*s2 - 48);
	break;
}
s1++;
s2++;
}
return (n);
}

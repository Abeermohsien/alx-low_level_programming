#include "main.h"
/**
 * _strspn - check for a string
 * @s: string characters
 * @accept: string word
 * Return: Always int
 */
unsigned int _strspn(char *s, char *accept)
{       
unsigned int i, j;
unsigned int c = 0;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == accept[i])
{
j++;
break;
}
continue;
}
if (j > c)
{
c = j;
}
}
return (c);
}

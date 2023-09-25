#include "main.h"
/**
 * _strpbrk - check the code
 * @s: string character
 * @accept: string character
 * Return: chartrerr
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j]  == s[i])
{
p = &s[i];
return (p);
}
}
}
return (0);
}

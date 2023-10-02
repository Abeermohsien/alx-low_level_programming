#include "main.h"
/**
 * _memset - fills n bytes of the memory with a byte b
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

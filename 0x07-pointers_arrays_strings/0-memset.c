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
char *ptr = s;
while (ptr < &s[n])
{
*ptr = b;
ptr++;
}
return (ptr);
}

#include "main.h"
/**
 * _memcpy - cpy block of memoy to block of me mory
 * @src: block of memory
 * @n: number of bytes
 * @dest: block og memoy
 * Return: pointe to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

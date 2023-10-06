#include "main.h"
#include <stdlib.h>
/**
 * _memset - fillmemory block
 * @c: charcte
 * @b: charcter
 * @n: intege
 * Return: char
 */
char *_memset(char *c, char b, int n)
{
char *ptr2 = c;
while (n--)
	*c++ = b;
return (ptr2);
}
/**
 * _calloc - alloc memorty for an array
 * @nmemb: int
 * @size: int
 * Return: void
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
ptr = malloc(sizeof(int) * nmemb);
if (nmemb == 0 || size == 0)
	return (NULL);
if (ptr == 0)
	return (NULL);
_memset(ptr, 0, sizeof(int) * nmemb);
return (ptr);
}

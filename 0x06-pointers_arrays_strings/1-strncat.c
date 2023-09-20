#include "main.h"
/**
 * _strncat - appends n charcter for src to dest
 * @dest: string character
 * @src: string character
 * @n: number of characters that wanted to be appends
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for ( i = 0; dest[i] != '\0'; i++)
	;
for (j = 0; j < n && src[j] !=  '\0'; j++)
	dest[i++] = src[j];
return (dest);

}

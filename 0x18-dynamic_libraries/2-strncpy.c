#include "main.h"
/**
 * _strncpy - copy src in dest
 * @src: string charcter
 * @dest: string charcter
 * @n: integer number
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}

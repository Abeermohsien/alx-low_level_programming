#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: string charcter
 * @src: string charcter
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
	;
for (j = 0; src[j] != '\0'; j++)
	dest[i++] = src[j];
return (dest);
}


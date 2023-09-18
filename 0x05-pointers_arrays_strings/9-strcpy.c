#include "main.h"

/**
 * main - function that copies the string pointed 
 * @src: string chacters
 * @dest: string characters
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = -1; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (src);
}

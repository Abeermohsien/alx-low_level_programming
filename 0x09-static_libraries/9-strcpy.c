#include "main.h"

/**
 * _strcpy - cp src content to dest
 * @dest: string charcter
 * @src: string charcter
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}

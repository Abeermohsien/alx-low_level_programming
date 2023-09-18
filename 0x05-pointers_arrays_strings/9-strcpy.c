#include "main.h"

/**
 * main - function that copies the string pointed
 * @src: string chacters
 * @dest: string characters
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

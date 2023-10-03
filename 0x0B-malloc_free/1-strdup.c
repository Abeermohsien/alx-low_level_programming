#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocated a memory space for newly string.
 * @str: string character
 * Return: char
 */
char *_strdup(char *str)
{
int i = 0, size = 0;
char *dup;
if (str == 0)
	return (NULL);
for (; str[size] != '\0'; size++)
	;
m = malloc(size * sizeof(*str) + 1);
if (m == 0)
	return (NULL);
else
{
	for (; i < size; i++)
		m[i] = str[i];
}
return (m);
}

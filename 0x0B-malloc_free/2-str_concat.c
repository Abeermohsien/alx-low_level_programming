#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: string character
 * @s2: string character
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
int size1 = 0, size2 = 0;
int i = 0;
char *m;
if (s1 == NULL)
	return (0);
for (; s1[size1] != '\0'; size1++)
	;
if (s2 == NULL)
	return (0);
for (; s2[size2] != '\0'; size2++)
	;
size = size2 + size1 + 1;
m = malloc(size *sizeof(char));
if (m == 0)
	return (0);
for (; i <= size; i++)
{
	if (i < size1)
		m[i] = s1[i];
	if (i > size1)
		m[i] = s2[i - size1];
}
m[i] = '\0';
return (m);
}

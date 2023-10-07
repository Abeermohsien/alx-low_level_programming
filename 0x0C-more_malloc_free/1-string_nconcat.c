#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concats two strings
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, m, j, k;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
;
for (m = 0; s2[m] != '\0'; m++)
;
ptr = malloc(i + n + 1);
if (ptr == NULL)
return (NULL);
for (j = 0; s1[j] != '\0'; j++)
ptr[j] = s1[j];
for (k = 0; k < n; k++)
{
ptr[i] = s2[k];
i++;
}
ptr[i] = '\0';
return (ptr);
}

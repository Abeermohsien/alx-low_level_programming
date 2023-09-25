#include "main.h"
/**
 * _strchr - search for a chaacter
 * @s: characters sting
 * @c: character
 * Return: character
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}

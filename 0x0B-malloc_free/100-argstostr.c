#include "main.h"
#include <stdlib.h>
/**
 * _strlen - count string length
 * @str: string
 * Return: int
 */
int _strlen(char *str)
{
int size = 0;
for (; str[size] != '\0'; size++)
	;
return (size);
}

/**
 * argstostr - printd all the arguments
 * @ac: integer
 * @av: char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
int  i, n = 0, c = 0, j;
char *s;
if (ac == 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++, n++)
	n += _strlen(av[i]);
s = malloc(sizeof(char) * n + 1);
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, c++)
		s[c] = av[i][j];
	s[c] = '\n';
	c++;
}
s[c] = '\0';
return (s);
}


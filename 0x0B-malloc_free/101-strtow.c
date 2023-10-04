#include "main.h"
#include <stdlib.h>
/**
 * counter - count letter numbers
 * @s: string
 * Return: int
 */
int counter(char *s)
{
int i, n = 0;
for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == ' ')
	{
		if (s[i + 1] != ' ' && s[i + 1] != '\0')
		n++;
	}
	else if (i == 0)
		n++;
}
n++;
return (n);
}
/**
 * strtow - sapeterate two strings
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **w;
	int c, l, j, i, n = 0, m = 0;
if (str == NULL || *str != '\0')
	return (NULL);
n = counter(str);
if (n == 1)
	return (NULL);
w = (char **)malloc(n *sizeof(char *));
if (w == NULL)
	return (NULL);
w[n - 1] = NULL;
i = 0;
while (str[i])
{
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	{
		for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
			;
		j++;
		w[m] = (char *)malloc(j * sizeof(char));
		j--;
		if (w[m] == NULL)
		{
			for (c = 0; c < m; c++)
				free(w[c]);
			free(w[n - 1]);
			free(w);
			return (NULL);
		}
		for (l = 0; l < j; l++)
			w[m][l] = str[i + l];
		w[m][l] = '\0';
		m++;
		i += j;
	}
	else
		i++;
}
return (w);
}

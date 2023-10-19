#include "lists.h"
/**
 * _strlength - string count
 * @str: string
 * Return: int
 */
int _strlength(char *str)
{
int n = 0;
while (*str)
{
n++;
str++;
}
return (n);
}
/**
 * add_node - add node
 * @head: pointer
 * @str: string
 * Return: pointer
 *
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *hh = malloc(sizeof(list_t));
if (!str || !head)
	return (NULL);
if (str)
{
hh->str = strdup(str);
if (!hh->str)
{
free(hh);
return (NULL);
}
hh->len  = _strlength(hh->str);
}
hh->next = *head;
*head = hh;
return (hh);
}

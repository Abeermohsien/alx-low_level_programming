#include "lists.h"
/**
 * _strleng - str lo g
 * @str: string
 * Return: int
 */
int _strleng(char *str)
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
 * add_node_end - add node at the end
 * @head: pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *hh = malloc(sizeof(list_t));
list_t *n = *head;
if (!head || !hh)
	return (NULL);
if (str)
{
hh->str = strdup(str);
if (!hh->str)
{
free(hh);
return (NULL);
}
hh->len = _strleng(hh->str);
}
if (n)
{
while (n->next)
{
n = n->next;
}
n->next = hh;
}
else
*head = hh;
return (hh);
}

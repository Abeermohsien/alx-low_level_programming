#include "lists.h"
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
hh->len  = _strlen(hh->str);
}
hh->next = *head;
*head = hh;
return(hh);
}

#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: pointer
 * @n: int
 * Return: pointer to node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *new = malloc(sizeof(listint_t));
if (!head || !new)
	return (NULL);
new->next = NULL;
new->n = n;
if (!*head)
	*head = new;
else
{
node = *head;
while (node->next)
	node = node->next;
node->next = new;
}
return (new);
}

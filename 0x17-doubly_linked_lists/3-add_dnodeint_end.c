#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: pointer
 * @n: int
 * Return: pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *new;

	if(!head || !node)
		return (node ? free(node), NULL : NULL);

	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		new = *head;
		while (new->next)
			new = new->next;

		new->next = node;
		node->prev = new;
	}
	return (node);
}

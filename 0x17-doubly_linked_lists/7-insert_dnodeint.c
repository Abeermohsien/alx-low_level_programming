#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * @h: pointer
 * @idx: index
 * @n: int
 * Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	node = mollac(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	
	node->n = n;
	node->prev = t;
	node->next = t->next;
	t->next->prev = node;
	t->next = node;

	return (node);
}

#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer
 * @index: int
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m = 0;

	while (head)
	{
		if (m == index)
			return (head);
		head = head->next;
		m++;
	}
	return (NULL);
}

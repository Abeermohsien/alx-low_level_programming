#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer
 * Return: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

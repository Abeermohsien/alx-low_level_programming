#include "lists.h"

/**
 * sum_dlistint - sum lists
 * @head: pointer
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

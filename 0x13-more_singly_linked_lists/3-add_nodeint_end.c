#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: pointer
 * @n: int
 * Return: pointer to node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (!head || !new)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

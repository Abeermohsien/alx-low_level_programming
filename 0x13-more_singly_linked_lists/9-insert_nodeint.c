#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at certain index
 * @head: pointer
 * @idx: int
 * @n: int
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new;
listint_t *node = malloc(sizeof(listint_t));
if (!head || !node)
	return (NULL);
node->n = n;
node->next = NULL;
if (!idx)
{
node->next = *head;
*head = node;
return (node);
}
new = *head;
while (new)
{
if (i == idx - 1)
{
node->next = new->next;
new->next = node;
return (node);
}
i++;
new = new->next;
}
free(node);
return (NULL);
}

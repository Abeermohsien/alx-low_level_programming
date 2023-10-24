#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer
 * @index: int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *new, *node;
if (!head || !*head)
	return (-1);
if (!index)
{
new = *head;
*head = (*head)->next;
free(new);
return (1);
}
new = *head;
for (i = 0; i < index - 1; i++)
	new = new->next;
node = new->next;
new->next = node->next;
free(node);
return (1);
return (-1);
}

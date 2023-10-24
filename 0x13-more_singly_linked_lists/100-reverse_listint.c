#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *new = NULL, *new2 = NULL;
if (!head || !*head)
	return (NULL);
new = *head;
*head = NULL;
while (new)
{
new2 = new->next;
new->next = *head;
*head = new;
new = new2;
}
return (*head);
}

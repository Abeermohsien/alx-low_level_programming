#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *new, *t;
if (!head)
	return;
new = *head;
while (new)
{
t = new;
new = new->next;
free(t);
}
*head = NULL;
}

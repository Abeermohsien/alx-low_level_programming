#include "lists.h"
/**
 * pop_listint - delet the head node
 * @head: pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int n;
if (!head || !*head)
	return (0);
new = (*head)->next;
n = (*head)->n;
free(*head);
*head = new;
return (n);
}

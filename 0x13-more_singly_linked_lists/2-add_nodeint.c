#include "lists.h"
/**
 * add_nodeint - adds node at the beginng
 * @head: pointer
 * @n: int data
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (!head || !new)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

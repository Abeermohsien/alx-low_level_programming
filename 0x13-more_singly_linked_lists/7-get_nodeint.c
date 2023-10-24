#include "lists.h"
/**
 * get_nodeint_at_index - get the node int the certin index
 * @head: pointer
 * @index: int
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *new;
new = head;
for (i = 0; i < index && new; i++)
{
new = new->next;
}
return (new);
}

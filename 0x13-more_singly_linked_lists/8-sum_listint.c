#include "lists.h"
/**
 * sum_listint - sum the data of the nodes
 * @head: pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *new;
new = head;
while (new)
{
sum += new->n;
new = new->next;
}
return (sum);
}

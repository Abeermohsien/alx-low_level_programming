#include "lists.h"
/**
 * free_list - free th list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
list_t *nd, *next;
if (!head)
	return;
nd = head;
while (nd)
{
next = nd->next;
free(nd->str);
free(nd);
nd = next;
}
}

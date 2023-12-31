#include "lists.h"
/**
 * dlistint_len - length
 * @h: header
 * Return: n
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

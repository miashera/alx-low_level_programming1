#include "lists.h"
/**
 * listint_len - list
 * @h: linked list
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

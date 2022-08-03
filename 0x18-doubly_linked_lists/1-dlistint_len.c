#include "lists.h"

/**
 * dlistint_len - program startup
 * @h: dlistint_t list
(* Description: returns the number of elements in a linked dlistint_t list)?
 * Return: number of elements in dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

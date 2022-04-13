#include "lists.h"

/**
 * dlistint_len - program startup
 * @h: list being evaluated
(*
 * Description: returns the number of elements in a linked dlistint_t list)?
 * Return: return (0) is the required function signature
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}

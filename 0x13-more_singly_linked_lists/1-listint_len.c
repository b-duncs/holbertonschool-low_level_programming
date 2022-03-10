#include "lists.h"

/**
 * listint_len - program startup
 * @h: list being evaluated
(*
 * Description: returns the number of elements in a 'listint_t' list)?
 * Return: return (0) is the required function signature
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

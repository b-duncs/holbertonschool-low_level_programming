#include "lists.h"

/**
 * list_len - program startup
 * @h: list being evaluated
(*
 * Description: returns the number of elements in a linked `list_t` list)?
 * Return: return (0) is the required function signature
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

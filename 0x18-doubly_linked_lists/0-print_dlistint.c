#include "lists.h"

/**
 * print_dlistint - program startup
 * @h: dlistint_t list
(* Description: prints all the elements of a dlistint_t list)?
 * Return: return (0) is the required function signature
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

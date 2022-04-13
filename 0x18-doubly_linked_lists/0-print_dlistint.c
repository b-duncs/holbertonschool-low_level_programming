#include "lists.h"

/**
 * print_dlistint - program startup
 * @dlistint_t: list being evaluated
(*
 * Description: prints all the elements of a dlistint_t list)?
 * Return: return (0) is the required function signature
 */

size_t print_dlistint(const dlistint_t *h);
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}

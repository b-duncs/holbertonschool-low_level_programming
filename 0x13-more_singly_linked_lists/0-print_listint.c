#include "lists.h"

/**
 * print_listint - program startup
 * @h: list being evaluated
(*
 * Description: prints all the elements of a 'listint_t' list)?
 * Return: return (0) is the required function signature
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}

#include "lists.h"

/**
 * *get_nodeint_at_index - program startup
 * @head: list being evaluated
 * @index: int being evaluated
(*
 * Description: returns the nth node of a `list_t` list)?
 * Return: return (0) is the required function signature
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}

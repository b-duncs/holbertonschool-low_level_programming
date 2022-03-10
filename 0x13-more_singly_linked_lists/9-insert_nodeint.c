#include "lists.h"

/**
 * *insert_nodeint_at_index - program startup
 * @head: list being evaluated
 * @idx: first int being evaluated
 * @n: second int being evaluated
(*
 * Description: inserts a new node at a given position)?
 * Return: return (0) is the required function signature
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

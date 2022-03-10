#include "lists.h"

/**
 * *add_nodeint_end - program startup
 * @head: list being evaluated
 * @n: int  being evaluated
(*
 * Description: adds a new node at the end of a `listint_t` list)?
 * Return: return (0) is the required function signature
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (*head);
}

#include "lists.h"

/**
 * add_dnodeint - program startup
 * @head: pointer to dlistint_t list
 * @n: integer for new node
(* Description: adds a new node at the beginning of a dlistint_t list)?
 * Return: return (0) is the required function signature
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}

#include "lists.h"

/**
 * add_dnodeint - program startup
 * @head: list being evaluated
 * @n: int being evaluated
(*
 * Description: adds a new node at the beginning of a dlistint_t list)?
 * Return: return (0) is the required function signature
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}

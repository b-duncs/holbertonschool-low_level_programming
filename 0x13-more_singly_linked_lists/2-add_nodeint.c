#include "lists.h"

/**
 * *add_nodeint - program startup
 * @head: list being evaluated
 * @n: int being evaluated
(*
 * Description: adds a new node at the beginning of a `list_t` list)?
 * Return: return (0) is the required function signature
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"

/**
 * free_listint2 - program startup
 * @head: list being evaluated
(*
 * Description: frees a `listint_t` list)?
 * Return: return (0) is the required function signature
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}

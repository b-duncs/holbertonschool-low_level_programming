#include "lists.h"

/**
 * free_listint - program startup
 * @head: list being evaluated
(*
 * Description: frees a `listint_t` list)?
 * Return: return (0) is the required function signature
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
